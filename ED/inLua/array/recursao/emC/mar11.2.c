a partir do codigo:
#define BTN 22
#define LED 11
volatile _Atomic uint16_t tempoU, volatile _Atomic uint16_t tempoA, bool LEDS=1;
bool trataT(time *t){
tempoA=to_us_since_boot(get_absolute_time());
if(tempoU-tempoA)>-100*1000){
    gpio_put(LED, LEDS);
    LEDS=!LEDS;} tempoU=tempoA; tempoA=0;}
    int main(){
        gpio_initAll(); gpio_init(LED); gpio_set_dir(LED, GPIO_OUT);
        gpio_init(BTN); gpio_set_dir(BTN, GPIO_IN); gpio_pull_up(BTN);
        gpio_set_enabled_with_callback(BTN, GPIO_IRQ_EDGE_GALL, true, &trataT);
        while(1){}
        return 0;
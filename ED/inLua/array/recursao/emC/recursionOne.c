//multiplicar dois numero recursivamente
//recursão e numero N por ele mesmo M vezes
//what to do in case of one of two or the two numbers bein negative
#include <stdlib.h>
#include <stdio.h>
#define MAXSTACK 10000
int numRec(int numero, int stop)
{
    static int vrvf=0;
    static int sum=0;
    if(vrvf>=MAXSTACK) //avoiding stackoverflow
    {
        return sum;

    }else{vrvf++;}
    static int ctrl=0;
  
    if(ctrl>=stop)//da pra usar uma varaivel static
    {
        return sum;
    }else{ctrl ++;}
    sum=sum+numero;
    return numRec(numero,stop);
}
int returnAbs(int num)
{//todo: - return abs
    if(num<0)
    { 
        num=num*(-1);
        return  num;
    }else{
        return num;
    }
}
int main(int argc, char **argv)
{
    
    //int numa=7, numb =7;

    //int numc=numRec(numa, numb);
    int nums[3];

    if(argc>=2)
    {
        int sig=0;
        for (int i=1; i<=2; i++)//argc start at 1, 0 is the name of the file
        {
            nums[i]=atoi(argv[i]);
            if(nums[i]<0)
            {
                if(sig==1)
                {
                    sig=0;
                }else
                {
                    sig=1;
                }
            }
            nums[i]=returnAbs(nums[i]);
            //todo: - ident signal 
            //         if some negative
        }
        int final=0;
        final=numRec(nums[1], nums[2]);
        if(sig==1)
        {
            final=final*(-1);
        }
        printf("\nvar argc: %d 1: %d, 2:%d ", argc, nums[1], nums[2]);
        printf("\n\nfinal r: %d\n", final);
    }
    printf("\n**fim**\n");
   return 0;

}
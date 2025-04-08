#include "bs.h"
#include <stdio.h>
#include <stdlib.h>

int busca(char*arr, int key)
{
    int i=0;
    while (arr[i]='\0')
    {
        if(arr[i]==key)
        {
            return i;//todo: retornar popsicao
        }
        i++;
    }
    return 0;
}
void toPrint(char*arr, int trgt)
{
    printf("\nprint total: ");
    int i=0;
    while(1)
    {
        
        if(i>=trgt)
        {
        break;
        }else{
            printf(" '%c'", arr[i]);//atoi funciona só para strings, não char individuais    
            i++;
        }
    }
    printf("\n ");
    
}
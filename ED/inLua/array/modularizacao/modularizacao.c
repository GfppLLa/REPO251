//main e busca
#include<stdlib.h>
#include<stdio.h>
#include "source/bs.h"
#define NUMAX 300 
#define NUMIN 1
#include <time.h>
#include<stdint.h>
uint32_t controle=0;
//generate arra form 1 to 300 and ask

void fillB(char *arr)
{
    int i=0;
    while (1)
    {
        if(arr[i]=='\0'){return;}
        arr[i]=(rand()%(122+1-97)+97);//fill with only lowercase
        i++;
    }
    
}
void indexG(int* totalA)
{
 //gen a number btwn 1 and 3000
 *totalA=rand()%(NUMAX+1-NUMIN)+NUMIN;

}
int main(int argc, char** argv)
{
    srand(time(NULL));
int elementos=0;
    if(argc>=2)
    {
        int *totalA;
        totalA=(int*)calloc(1, sizeof(int));
        if(totalA==NULL)
        {
            printf("\nERRO DE ALLOC\n");
            return 1;
        }
        indexG(totalA);
        elementos=*totalA;
        char *totalB=(char*)malloc(*totalA* sizeof(char));//usando calloc o valor inicial é \0
        if(totalB==NULL)
        {
            printf("\nERRO DE ALLOC\n");
            return 1;
        }
        totalB[*totalA]='\0';
        controle=*totalA;
        fillB(totalB);//preencher o array com letras aleatortias
        char leitura=argv[1];
        int result=busca(totalB, leitura);
        if(result>0)
        {
            printf("\nletter found >\n");
            toPrint(totalB, result);
        }else{    printf("\n letra %s nao inclusa no array de %d elementos\n",argv[1], elementos);}
        toPrint(totalB, elementos);

        //free(ctrl);
        free(totalB);
        free(totalA);
    }

    


return 0;
}
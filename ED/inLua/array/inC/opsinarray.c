/*
ops with arrays
array uni A and B
if number in B is pair = a*b
if odd = a-b
i>=7
*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    static int A[] = {1, 3, 5, 7, 9, 11, 13, 15};
    static int B[] = {1, 1, 2, 2, 3, 3, 4, 4};
    int C[100];
    int ctrl = 0;
        for (int i = 0; i <= 7; i++)
        {
            if(B[i]%2==0)
            {
                C[i]=A[i]*B[i];
            }else if(B[i]%2!=0)
            {
                C[i]=A[i]-B[i];
            }
            ctrl++;
        }
        printf("exit: ");
        for(int i=0; i<ctrl; i++)
        {
            printf(" %d", C[i]);
        }
        printf("\n");
return 0;
}
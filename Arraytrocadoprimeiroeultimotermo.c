#include <stdio.h>

void trocaarray(int A[],int tamanho)
{
    int aux=A[0];
    A[0]=A[tamanho-1];
    A[tamanho-1]=aux;


}
// Main
int main()
{
    int tamanho=0;
    scanf("%d",&tamanho);
    int A[tamanho];
    for(int i=0; i<tamanho; i++)
    {
        A[i]=i;
    }
   trocaarray(A,tamanho);
    for(int i=0; i<tamanho; i++)
    {
        printf("%d",A[i]);

    }
}


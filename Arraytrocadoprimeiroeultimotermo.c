#include <stdio.h>

void trocaarrayprimeiroeultimotermo(int A[],int tamanho)
{
    int aux=A[0];
    A[0]=A[tamanho-1];
    A[tamanho-1]=aux;


}

void trocaarray(int A[],int tamanho,int troca,int variavel)
{
    int aux=A[variavel];
    A[variavel]=A[troca];
    A[troca]=aux;


}

void preencherarray(int A[],int tamanho)
{
    for(int i=0; i<tamanho; i++)
    {
        A[i]=i;
    }
}
// Main
int main()
{
    int tamanho=0;
    scanf("%d",&tamanho);
    int A[tamanho];
    preencherarray(A,tamanho);
    for(int i=0; i<tamanho; i++)
    {
        printf("%d",A[i]);

    }
}
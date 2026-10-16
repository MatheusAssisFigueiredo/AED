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

void maiorparaultimaposicao(int A[],int tamanho)
{
int maior=0,aux=0;
for(int i=1;i<tamanho;i++)
{
if(A[maior]<A[i])
{
maior=i;
}
}
aux=A[maior];
A[maior]=A[tamanho-1];
A[tamanho-1]=aux;
}

void menorparaultimaposicao(int A[],int tamanho)
{
int menor=0,aux=0;
for(int i=1;i<tamanho;i++)
{
if(A[menor]>A[i])
{
menor=i;
}
}
aux=A[menor];
A[menor]=A[0];
A[0]=aux;
}
void ordenardrescente(double vetor[], int tamanho)
{
    int i, j;
    double aux;

    for (i = 1; i < tamanh; i++)
    {
        for (j = 0; j < tamanho - 1 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
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
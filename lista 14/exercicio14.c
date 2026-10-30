#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int tamanhodastring(char string[])
{
        int tamanho=0;
        while(string[tamanho]!='\0')
        {
            tamanho++;
           
        }
    return tamanho;
}
int contagemdevogal(char string[])
{
int i=0,contagemvogais=0;
 while(string[i]!='\0')
 {
   if(toupper(string[i])=='A'||toupper(string[i])=='E'||toupper(string[i])=='I'||toupper(string[i])=='O'||toupper(string[i])=='U')
   {
       contagemvogais++;
   }
       i++;
 }
 return contagemvogais;
}
typedef struct {
    int codigo;
    int ano;
    int quantidade;
} Livro;

void listarLivros(Livro livros[], int n, int anoReferencia) {
    int i;

    for (i = 0; i < n; i++) {
        if (livros[i].ano >= anoReferencia) {
            printf("Codigo: %d\n", livros[i].codigo);
            printf("Ano: %d\n", livros[i].ano);
            printf("Quantidade: %d\n", livros[i].quantidade);
            printf("\n");
        }
    }
}
#define PI 3.14159

typedef struct {
    float raio;
} Circulo;

void listarCirculos(Circulo vet[], int tamanho) {
    int i;
    float perimetro, area;

    for (i = 0; i < tamanho; i++) {
        perimetro = 2 * PI * vet[i].raio;
        area = PI * vet[i].raio * vet[i].raio;

        printf("\nCirculo %d\n", i + 1);
        printf("Raio: %.2f\n", vet[i].raio);
        printf("Perimetro: %.2f\n", perimetro);
        printf("Area: %.2f\n", area);
    }
}
int main(){ }
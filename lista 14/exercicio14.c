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
int main(){ }
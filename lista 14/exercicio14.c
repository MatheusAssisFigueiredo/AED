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
int main(){ }
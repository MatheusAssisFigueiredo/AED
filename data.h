#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define max_str 50
#define max 100
int tamanho=0;

typedef struct
{
int dia,mes,ano;

}data;

int diasmes(data datas)
{
int dias[]={31,28,31,30,31,30,31,31,30,31,30,31};
return dias[datas.mes-1];
}


char* mesextenso(data datas)
{
char* mes[]={"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
return mes[datas    .mes-1];
}

void escreverdata(data datas)
{
printf("\n%d/%d/%d",datas.dia,datas.mes,datas.ano);
}

void leiadata(data *datas)
{
printf("\ndd/mm/aaaa:");
scanf("%d/%d/%d",&datas->dia,&datas->mes,&datas->ano);

}



/*
    pessoa pessoas[max];
    data datas;
    for(int i=0;i<100;i++)
        {
        fflush(stdin);
        printf("Pessoa[%d]\n",i);
        printf("Digite o nome da pessoa\n");
        fgets(pessoas[i].nome,max_str,stdin);
        printf("Digite a data de nascimento\nDigite dia/mes/ano:");
        scanf("%d/%d/%d",&pessoas[i].datanascimento.dia,&pessoas[i].datanascimento.mes,&pessoas[i].datanascimento.ano);
        system("cls");

*/







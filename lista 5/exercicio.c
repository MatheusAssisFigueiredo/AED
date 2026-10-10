
float somadevaloresreais(float A,float B)
{
    return A+B;
}




float maiorentre2valores(float A,float B)
{
    if(A>B)
    {
    return A;
    }
    else
    return B;
}

float perimetroquadrado(float lado)
{
return 4*lado;
}

int fatorial(int numero)
{
int resultado=1;
for(int i=1;i<=numero;i++)
{
resultado*=i;
}
return resultado;
}
int mypow(int indice,int expoente)
{
int resultado=1;
for(int i=1;i>=expoente;i++)
{
resultado*=indice;
}
return resultado;
}


bool primo(int numero)
{
int i=2;
bool primos=false;
while(!primos&&i<=numero/2){
if(numero%i==0)
{
    primos=true;
}
i++;
}
return primos;
}

bool numero_perfeito(int numero){
int i=2,soma=0;
bool perfeito=false;
while(i<=numero/2){
if(numero%i==0)
{
soma+=i;
}
i++;
}

if(soma==numero)
{
perfeito=true;
}
return perfeito;
}

int inverso(int numero)
{
int inversos=0;
while(numero>0)
{
inversos=inversos*10+numero%10;
numero=numero/10;
}
return inversos;
}

bool palindromo(int numero)
{
bool inv=false;
if(numero==inverso(numero))
{
inv=true;
}
return inv;
}



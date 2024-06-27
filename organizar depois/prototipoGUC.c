//Versão de testes da função

#include <stdio.h>   
#include <math.h>
#include <stdlib.h>  //Adicionei as bibliotecas stdlib.h e time.h para atribuir números aleatórios e facilitar o teste da função
#include <time.h>

#define TAMANHO 2 //Defini um tamanho fixo pros vetores, também para facilitar o teste

double calcularGuc(double *p, double *q, double *u, int n); //Assumi que as variáveis seriam colocadas na ordem "p, q, u, n"

int main(){
double p[TAMANHO], q[TAMANHO], u[TAMANHO];
    
    int n = 2; //Chutando um valor para n

    srand(time(NULL));

    //Os 3 comandos de 'for' são apenas para atribuir valores aleatórios e facilitar o teste
    for(int i = 1; i <= TAMANHO; i++)
    {
        p[i] = rand() % 10; //
        printf("\nNumero %d: %.2lf", i, p[i]);
    }
    printf("\n");
    for(int i = 1; i <= TAMANHO; i++)
    {
        q[i] = rand() % 10;
        printf("\nNumero %d: %.2lf", i, q[i]);

    }
    printf("\n");
    for(int i = 1; i <= TAMANHO; i++)
    {
        u[i] = rand() % 10;
        printf("\nNumero %d: %.2lf", i, u[i]);
    }

    printf("\n%.2lf\n", calcularGuc(p, q, u, n));


    return 0;

}

double calcularGuc(double *p, double *q, double *u, int n){
    double numerador = 0, denominador = 0, guc = 0;
 
    for(int i = 1; i <= n; i++)
    {
        numerador += u[i] * (p[i] - q[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        denominador += p[i] - q[i];
    }
    
    guc = numerador / denominador;

    return guc;
}
#include <stdio.h>
#include <math.h>

#define TAMANHO 3

double calcularGuc(double *p, double *q, double *u, int n);

int main(){
double p[TAMANHO], q[TAMANHO], u[TAMANHO];

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
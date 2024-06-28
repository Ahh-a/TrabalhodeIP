#include <stdio.h>
#include <math.h>

double calcular_pic(int n, double p[], double q[]) {
    double soma_q = 0, soma_p = 0;
    for (int i = 0; i < n; i++) {
        soma_q += q[i];
        soma_p += p[i];
    }
    if (soma_p > 0) {
        return (soma_q / soma_p) * 100.0;
    } else {
        return 0.0;
    }
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

void rodape_comum() {

    printf("---------------------------------------------------------------------------------------------------------------------------------- \n");
    printf("Programa desenvolvido pelos alunos. \n");
    printf("-Vitor Vitorette Serafim de Pina; \n");
    printf("-Humberto Henry Gontijo Braga; \n");
    printf("-Yuri Salatiel de Lima; \n");
    printf("-Gabriel Augusto Ramos Detofol; \n");
    printf("-Leo Faris Monteiro de Paula. \n");
    }

void interface()
{
  printf("\n  código  | ação"
         "\n     1    | Recepção de carregamento"
         "\n     2    | Gerar relatório"
         "\n     3    | Sair"
         "\n"
         "\nDigite o código: ");
}

void menu()
{ 
  interface();
  int codigo;
  do
  {
    scanf("%d", &codigo);
  switch (codigo)
  {
  case 1:  
    interface();
    break;
  case 2:  
    interface();
    break;
  case 3:
    printf("\nfinalizando o programa...\n\n");
    break;
  default:
    printf("\nCódigo não encontrado...\n");
    break;
  }
  } while ( codigo != 3);
}

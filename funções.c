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

void cabeçalho_comun_relatório_mensal()
{
  printf("\nUFG-BSI-IP (COOPERATIVA AGRÍCOLA GRÃO_DO_VALE V1.0)"
         "\nANO: 2024 <relatório mensal>"
         "\n----------------------------------------------------------------------------------------------------------------------------------- \n");

}

void cabeçalho_comun_recpção_carregamento()
{
  printf("\nUFG-BSI-IP (COOPERATIVA AGRÍCOLA GRÃO_DO_VALE V1.0)"
         "\nANO: 2024 <recepção de carregamento>"
         "\n----------------------------------------------------------------------------------------------------------------------------------- \n");

}

void cabeçalho_comun_relatório_estatísticas()
{
  printf("\nUFG-BSI-IP (COOPERATIVA AGRÍCOLA GRÃO_DO_VALE V1.0)"
         "\nANO: 2024 <relatório estatísticas>"
         "\n----------------------------------------------------------------------------------------------------------------------------------- \n");

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


void descricao_de_Carregamento()
{

    printf("a) Relatorio da funcao Carregamento - Descricao de Carregamento \n\n");

    printf("Origem: %d \t  Num. de amostras: %d   \t Data: %d \n");
    printf("Umidade: %d \t  Peso limpo: %d        \t Transgenico: %d \n\n");

    printf("Umidade: %d \t   Quant.: %d  \n");
    printf("Ident. das Amostras: %d  \n\n");

    printf("Umidade: %d \t   Quant.: %d \n");
    printf("Ident. das Amostras: %d  \n\n");

    printf("Umidade: %d \t   Quant.: %d \n");
    printf("Ident. das Amostras: %d  \n");
}

void print_relatorio_mensal(char* mes, int linhas, char dados[linhas][6][10]) {
    printf("=>> Mes: %s\n", mes);
    printf("\n");

    char origem[15], cargas[15], guFaixa1[15], guFaixa2[15], guFaixa3[15], guExtra[15];
    centerText(origem, "Origem", 14);
    centerText(cargas, "Cargas", 14);
    centerText(guFaixa1, "GU Faixa 1", 14);
    centerText(guFaixa2, "GU Faixa 2", 14);
    centerText(guFaixa3, "GU Faixa 3", 14);
    centerText(guExtra, "GU Extra", 14);

    printf("%s %s %s %s %s %s\n", origem, cargas, guFaixa1, guFaixa2, guFaixa3, guExtra);
    printf("--------------+--------------+--------------+--------------+--------------+--------------\n");

    for (int i = 0; i < linhas; i++) {
        for (int k = 0; k < 6; k++) {
            char aligned[15];
            centerText(aligned, "xxxx", 14);
            printf("%s ", aligned);
        }
        printf("\n");
    }
}

void interface()
{
  printf("\n  código  | ação"
         "\n     1    | Recepção de carregamento"
         "\n     2    | Gerar relatório mensal"
         "\n     3    | Gerar relatório estatísticas"
         "\n     4    | Sair"
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
  case 1:  //Recepção de carregamento

    cabeçalho_comun_recpção_carregamento();
    Descricao_de_Carregamento();
    rodape_comum();
    interface();

    break;
  case 2:  //Gerar relatório mensal

    cabeçalho_comun_relatório_mensal();
    int mes;
    char dados[6][15];
    printf("\ndigite o mes: ");
    scanf("%d", &mes);
    print_relatorio_mensal(mes,15 ,dados[6][10]); //valores de rascunho
    rodape_comum();
    interface();

    break;
  case 3: //Gerar relatório estatísticas

    cabeçalho_comun_relatório_estatísticas();
    rodape_comum();
    interface();

    break;
  case 4: //Sair

    printf("\nfinalizando o programa...\n\n");

    break;
  default:

    printf("\nCódigo não encontrado...\n");

    break;
  }
  } while ( codigo != 4);
}

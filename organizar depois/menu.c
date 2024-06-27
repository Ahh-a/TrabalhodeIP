#include <stdio.h>

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

int main ()
{
  menu();
  return 0;
}
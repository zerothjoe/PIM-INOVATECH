#include "header.h"

int main()
{
  struct tm
  {
    int tm_sec;  // representa os segundos de 0 a 59
    int tm_min;  // representa os minutos de 0 a 59
    int tm_hour; // representa as horas de 0 a 24
    int tm_mday; // dia do mês de 1 a 31
    int tm_mon;  // representa os meses do ano de 0 a 11
    int tm_year; // representa o ano a partir de 1900
    int tm_wday; // dia da semana de 0 (domingo) até 6 (sábado)
    int tm_yday; // dia do ano de 1 a 365
  };
  struct tm *data_hora_atual;

  // variável do tipo time_t para armazenar o tempo em segundos
  time_t segundos;

  // obtendo o tempo em segundos
  time(&segundos);

  //converte os segundos para o tempo local

  data_hora_atual = localtime(&segundos);

  memset(login, '\0', sizeof(login));
  memset(senha, '\0', sizeof(senha));
  printf("\t\t\t\t========================================================\n");
  printf("\t\t\t\tSistema de gerenciamento de Usuarios -- InovaTech\n");
  printf("\t\t\t\t========================================================\n");
  printf("\nDigite o seu nome de usuário: ");
  scanf("%s", login);
  getchar();
  fflush(stdin);
  printf("Digite a sua Senha: ");
  while (ctecla < 5)
  {
    ch = getch();

    switch (ch)
    {
    case BACKSPACE:
      if (ctecla > 0)
      {
        fflush(stdin);
        putch(BACKSPACE);
        ch = '\0';
        senha[ctecla] = ch;
        ctecla--;
        putch(SPACE);
        putch(BACKSPACE);
      }
      break;
    case TAB:
      putch(TAB);
      ctecla = 5;
      break;
    case ENTER:
      putch(ENTER);
      ctecla = 5;
      break;
    default:
      senha[ctecla] = ch;
      putch('*');
      ctecla++;
      break;
    }
  }

  if


      (strcmp(adminlog, login) == 0 && strcmp(adminpass, senha) == 0)
  { while (loop == 0){
    system("cls");
    printf(GREEN "LOGADO COM SUCESSO\n" RESET);
    printf("bem vindo %s", login);
    printf("\n Menu Inicial: \n 1 Produtos  \n 2 cadastro de clientes \n 3 Relatorios \n 4 Cadastro de funcionarios \n 5 Sair \n --");
    scanf("%d", &menu);
    getchar();
    switch (menu)
    {
    case 1:
      printf("nada pra ver aqui ainda");
      break;
    case 2:
      printf("nada pra ver aqui ainda");
      break;
    case 3:;
    system("cls");
      FILE *relatorio_ptr;
      relatorio_ptr = fopen("relatorio.txt", "a");
      printf("Relatorio Diario:  ");
      scanf("%255[^\n]s", Vrelatorio);
      fflush (stdin);
      fprintf(relatorio_ptr, "\nrelatorio do dia %d/%d/%d: \n %s \n\n\n\n", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900, Vrelatorio);
      fclose(relatorio_ptr);
      printf("Relatorio do dia %d/%d/%d salvo com sucesso.\npressione qualquer tecla pra voltar ao menu ", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900);
      getchar();
      break;
    case 4:;
      printf("nada pra ver aqui ainda");
      break;
    case 5:
      system ("cls");
      printf ("programa finalizado");
      loop = 1;
      break;
    default:
      printf("digite uma opção valida");

      break;
    }
  }}

else
{
    bool exists = user_exists(login, senha);

    if (exists == true)
    {getchar();
      system("cls");
      printf(GREEN "LOGADO COM SUCESSO\n" RESET);

      printf("\n Menu Inicial: \n 1 Produtos  \n 2 Cadastro de Clientes \n 3 Relatorios \n 4 Sair");
    }

    if (exists == false)
    {
      system("cls");
      printf(RED "UsuÃ¡rio ou senha invÃ¡lidos\n" RESET);
      return 0;
    }


  }
}





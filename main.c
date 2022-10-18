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

  // para converter de segundos para o tempo local
  // utilizamos a função localtime

  data_hora_atual = localtime(&segundos);
  memset(login, '\0', sizeof(login));
  memset(senha, '\0', sizeof(senha));
  printf("\t\t\t\t========================================================\n");
  printf("\t\t\t\tSistema de gerenciamento de Usuarios -- InovaTech\n");
  printf("\t\t\t\t========================================================\n");
  printf("\nDigite o seu nome de usuário: ");
  scanf("%s", login);
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

      ////////////////////////////////////////////PROGRAMA ADMIN COMEÇA AQUI////////////////////////////////////////////////////////

      (strcmp(adminlog, login) == 0 && strcmp(adminpass, senha) == 0)
  {
    system("cls");
    printf(GREEN "LOGADO COM SUCESSO\n" RESET);
    printf("\n Menu Inicial: \n 1 Cadastro de Clientes:  \n 2 Gerenciamento de Assinaturas: \n 3 Tela de Relatorios: \n 4 Cadastro de funcionarios:\n --");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
      printf("nada pra ver aqui ainda");
      break;
    case 2:
      printf("nada pra ver aqui ainda");
      break;
    case 3:;
      FILE *relatorio;
      relatorio = fopen("relatorio.txt", "ab");
      printf("Relatorio Diario:  ");
      scanf("%s", Vrelatorio);
      fprintf(relatorio, "________________________________________________________________________\nrelatorio do dia %d/%d/%d \n %s \n\n\n\n", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900, Vrelatorio);
      fclose(relatorio);
      break;
    case 4:
      printf("nada pra ver aqui ainda");
      break;
    default:
      printf("digite uma opção valida");
      break;
    }
  }
  ////////////////////////////////////////////PROGRAMA ADMIN TERMINA AQUI////////////////////////////////////////////////////////

  else

  ////////////////////////////////////////////PROGRAMA FUNC COMEÇA AQUI////////////////////////////////////////////////////////

  {
    bool exists = user_exists(login, senha);

    if (exists == true)
    {
      system("cls");
      printf(GREEN "LOGADO COM SUCESSO\n" RESET);

      printf("\n Menu Inicial: \n 1 Cadastro de Clientes:  \n 2 Gerenciamento de Assinaturas: \n 3 Tela de Relatorios:");

      ////////////////////////////////////////////PROGRAMA FUNC TERMINA AQUI////////////////////////////////////////////////////////
    }

    else
    {
      system("cls");
      printf(RED "Usuário ou senha inválidos\n" RESET);
      return 0;
    }
  }
}




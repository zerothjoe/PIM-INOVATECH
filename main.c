#include "header.h"

int main()
{
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
    printf(GREEN "LOGADO COM SUCESSO\n"RESET);
    printf("\n Menu Inicial: \n 1 Cadastro de Clientes:  \n 2 Gerenciamento de Assinaturas: \n 3 Tela de Relatorios: \n 4 Cadastro de funcionarios");

    ////////////////////////////////////////////PROGRAMA ADMIN TERMINA AQUI////////////////////////////////////////////////////////
  }




  else

  ////////////////////////////////////////////PROGRAMA FUNC COMEÇA AQUI////////////////////////////////////////////////////////

  {
    bool exists = user_exists(login, senha);

    if (exists == true)
    {
      system("cls");
      printf(GREEN "LOGADO COM SUCESSO\n" RESET);

      printf( "\n Menu Inicial: \n 1 Cadastro de Clientes:  \n 2 Gerenciamento de Assinaturas: \n 3 Tela de Relatorios:");

      ////////////////////////////////////////////PROGRAMA FUNC TERMINA AQUI////////////////////////////////////////////////////////
    }



    else
    {
      system("cls");
      printf(RED "Usuário ou senha inválidos\n"RESET);
      return 0;
    }
  }
}

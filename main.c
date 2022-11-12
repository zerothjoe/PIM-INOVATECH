#include "header.h"

int main()
{

  struct referencia
  {
    char nome[100], cpf[100], tel[100], email[100], end[100];
  } CA[600];
  CA[600];
  CA[600];
  CA[600];
  CA[600];
  CA[600];
  CA[600];

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

  // converte os segundos para o tempo local

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
  while (ctecla < 20)
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
      ctecla = 20;
      break;
    case ENTER:
      putch(ENTER);
      ctecla = 20;
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
  {
    while (loop == 0)
    {
      system("cls");
      printf(GREEN "LOGADO COM SUCESSO\n" RESET);
      printf("bem vindo %s", login);
      printf("\n Menu Inicial: \n 1 Produtos  \n 2 cadastro de clientes");
      printf("\n 3 Relatorios \n 4 Cadastro de funcionarios \n 5 Sair \n --");
      scanf("%d", &menu);
      getchar();
      switch (menu){
      case 1:;
        FILE *arq;
        int op;
        arq = fopen("estoque.txt", "rb+");
        if (arq == NULL){
          arq = fopen("estoque.txt", "wb+");
        }
        if (arq != NULL){
          int fim = 0;
          do{
            Menu();
            switch (opcao5){
            case 1:
              system("cls");
              cadastro(arq);
              break;
            case 2:
              system("cls");
              catalogo();
              break;
            case 3:
              system("cls");
              Remover();
              break;
            case 4:
              fim = 1;
              break;
            default:
              printf("Opcao Invalida\n");
            }
          } while (!(fim));
        }
        break;
      case 2:
        printf("---------------------------------------------------------\n\n");
        printf("\n1-Cadastrar\n ");
        printf("\n2-Exibir Dados\n ");
        printf("---------------------------------------------------------\n\n");
        printf("\n Qual opcao voce deseja acessar? ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
          system("cls");
          printf("\n\n Quantos Cadastros voce deseja realizar?");
          scanf("%d", &quant);
          for (i = 1; i <= quant; i++){
            system("cls");
            printf("\n\n\t\t\t  INICIANDO CADASTRO %d\n", i);
            printf("\t\t\t -------------------------\n\n");
            printf("\n Nome Completo: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].nome);
            printf("\n CPF: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].cpf);
            printf("\n Telefone: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].tel);
            printf("\n E-mail: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].email);
            printf("\n EndereÃ§o: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].end);
            printf("\n\n\t\t");
            printf("\n Cadastro realizado com Sucesso!\n\n");
            system("pause");
            system("cls");
          }
          break;
        case 2:
          system("cls");
          for (i = 1; i <= quant; i++){
            system("cls");
            printf("\n\n\t\t\t  Exibindo Cadastro %d\n", i);
            printf("\t\t\t -------------------------\n\n");
            printf("\n Nome Completo: %s\n", CA[i].nome);
            printf("\n CPF: %s\n", CA[i].cpf);
            printf("\n Telefone: %s\n", CA[i].tel);
            printf("\n E-mail: %s\n", CA[i].email);
            printf("\n EndereÃ§o: %s\n", CA[i].end);
            system("pause");
          }
        }

        break;
      case 3:;
        system("cls");
        FILE *relatorio_ptr;
        relatorio_ptr = fopen("relatorio.txt", "a");
        printf("Relatorio Diario:  ");
        scanf("%255[^\n]s", Vrelatorio);
        fflush(stdin);
        fprintf(relatorio_ptr, "relatorio do dia %d/%d/%d: \n %s \n\n\n\n", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900, Vrelatorio);
        fclose(relatorio_ptr);
        printf("Relatorio do dia %d/%d/%d salvo com sucesso.\npressione qualquer tecla pra voltar ao menu ", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900);
        getch();
        break;
      case 4:;
        printf("\n digite o nome do funcionario: \n");
        scanf("%255[^\n]s", &usuario.nome);
        getchar();
        printf("\n digite o email do funcionario: \n");
        scanf("%255[^\n]s", &usuario.email);
        getchar();
        printf("\n digite o cpf do funcionario: \n");
        scanf("%d", &usuario.cpf);
        getchar();
        printf("\n digite a idade do funcionario: \n");
        scanf("%d", &usuario.idade);
        getchar();
        FILE *usuario_ptr;
        usuario_ptr = fopen("usuarios.txt", "a");
        printf("\n digite o user do novo funcionario:\n ");
        scanf("%s", login2);
        fflush(stdin);
        printf("\n digite a senha do novo usuario: \n  ");
        scanf("%s", senha2);
        fflush(stdin);
        fprintf(usuario_ptr, "\n%s|%s", login2, senha2);
        fclose(usuario_ptr);
        printf("usuario cadastrado com sucesso");
        FILE *usuario2_ptr;
        usuario2_ptr = fopen("dados_usuarios.txt", "a");
        fprintf(usuario2_ptr, "\nfuncionario 1- \n nome: %s \n email:%s \n cpf: %d \n idade %d", usuario.nome, usuario.email, usuario.cpf);
        fclose(usuario2_ptr);
        getch();
        break;
      case 5:
        system("cls");
        printf("programa finalizado");
        loop = 1;
        break;
      default:
        printf("digite uma opção valida");
        getch();
        break;
      }
    }
  }

  else
  {
    bool exists = user_exists(login, senha);

    if (exists == true)
    {
      while (loop == 0)
    {
      system("cls");
      printf(GREEN "LOGADO COM SUCESSO\n" RESET);
      printf("bem vindo %s", login);
      printf("\n Menu Inicial: \n 1 Produtos  \n 2 cadastro de clientes");
      printf("\n 3 Relatorios \n 4 Sair \n --");
      scanf("%d", &menu);
      getchar();
      switch (menu){
      case 1:;
        FILE *arq;
        int op;
        arq = fopen("estoque.txt", "rb+");
        if (arq == NULL){
          arq = fopen("estoque.txt", "wb+");
        }
        if (arq != NULL){
          int fim = 0;
          do{
            Menu();
            switch (opcao5){
            case 1:
              system("cls");
              cadastro(arq);
              break;
            case 2:
              system("cls");
              catalogo();
              break;
            case 3:
              system("cls");
              Remover();
              break;
            case 4:
              fim = 1;
              break;
            default:
              printf("Opcao Invalida\n");
            }
          } while (!(fim));
        }
        break;
      case 2:
        printf("---------------------------------------------------------\n\n");
        printf("\n1-Cadastrar\n ");
        printf("\n2-Exibir Dados\n ");
        printf("---------------------------------------------------------\n\n");
        printf("\n Qual opcao voce deseja acessar? ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
          system("cls");
          printf("\n\n Quantos Cadastros voce deseja realizar?");
          scanf("%d", &quant);
          for (i = 1; i <= quant; i++){
            system("cls");
            printf("\n\n\t\t\t  INICIANDO CADASTRO %d\n", i);
            printf("\t\t\t -------------------------\n\n");
            printf("\n Nome Completo: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].nome);
            printf("\n CPF: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].cpf);
            printf("\n Telefone: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].tel);
            printf("\n E-mail: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].email);
            printf("\n EndereÃ§o: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].end);
            printf("\n\n\t\t");
            printf("\n Cadastro realizado com Sucesso!\n\n");
            system("pause");
            system("cls");
          }
          break;
        case 2:
          system("cls");
          for (i = 1; i <= quant; i++){
            system("cls");
            printf("\n\n\t\t\t  Exibindo Cadastro %d\n", i);
            printf("\t\t\t -------------------------\n\n");
            printf("\n Nome Completo: %s\n", CA[i].nome);
            printf("\n CPF: %s\n", CA[i].cpf);
            printf("\n Telefone: %s\n", CA[i].tel);
            printf("\n E-mail: %s\n", CA[i].email);
            printf("\n EndereÃ§o: %s\n", CA[i].end);
            system("pause");
          }
        }

        break;
      case 3:;
        system("cls");
        FILE *relatorio_ptr;
        relatorio_ptr = fopen("relatorio.txt", "a");
        printf("Relatorio Diario:  ");
        scanf("%255[^\n]s", Vrelatorio);
        fflush(stdin);
        fprintf(relatorio_ptr, "relatorio do dia %d/%d/%d: \n %s \n\n\n\n", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900, Vrelatorio);
        fclose(relatorio_ptr);
        printf("Relatorio do dia %d/%d/%d salvo com sucesso.\npressione qualquer tecla pra voltar ao menu ", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900);
        getch();
        break;
      case 4:
        system("cls");
        printf("programa finalizado");
        loop = 1;
        break;
      default:
        printf("digite uma opção valida");
        getch();
        break;
      }
    }
    }

    if (exists == false)
    {
      system("cls");
      printf(RED "USUARIO OU SENHA INVALIDOS\n" RESET);
      return 0;
    }
  }
}

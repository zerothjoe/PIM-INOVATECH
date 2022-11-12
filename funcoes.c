#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>



int opcao5=0;
int prx;

////////////////////////////////////////////// STRUCT PRODUTOS
typedef struct{
        int idProduto;
        int estoque;
        char nome[100];
        float valor;
}tipoproduto;

int produto(FILE *arq,int idProduto){
tipoproduto tp;
    int posicao =0;
    rewind(arq);
        while(fread(&tp,sizeof(tp),1,arq)!=0)
		{
            if(tp.idProduto==produto)
                return posicao;

			  else
                    posicao++;

                }
return -1;
}


////////////////////////////////// MENU DE OPÇÕES
void Menu()
{
system("cls");
printf("------------------------------ Inovatech ------------------------------");
printf("\n1 - Cadastro de produtos\n");
printf("\n2 - Catalogo\n");
printf("\n3 - Remover Registros\n");
printf("\n4 - Voltar ao menu inicial\n");
printf("\nEscolha uma das opcoes: \n");
scanf("%d",&opcao5);

}

//////////////////////////////// CADASTRAR PRODUTOS
void cadastro(){
    tipoproduto tp;
    int voltar;
    FILE *arq;

    arq=fopen("estoque.txt","ab+");
    if(arq ==NULL){
    printf("Erro!\n");
    exit(1);

}
    do {
	printf("---------------------------- Cadastro de Produtos ----------------------------");
    printf("\nid do Produto: ");
    scanf("%d",&tp.idProduto);
    fflush(stdin);

    printf("\nNome: ");
	fgets(tp.nome,100, stdin);

    printf("\nEstoque: ");
    scanf("%d",&tp.estoque);
    fflush(stdin);

    printf("\nPreco: R$");
    scanf("%f",&tp.valor);
	fflush(stdin);

    fseek(arq,0,SEEK_END);
    fwrite(&tp,sizeof(tipoproduto),1,arq);
	printf("\n\nProduto cadastrado!\n");
	getch();
	printf("\nDigite 1 para continuar o cadastro ou outro valor para voltar ao menu: ");
    scanf("%d",&prx);
	opcao5++;
  } while (prx == 1);
    fclose(arq);
    getch();}


///////////////////////////////////////// CATALOGO

int catalogo (void)
{
FILE *arq;
    arq = fopen("estoque.txt","rb+");
    if (!arq)
        return 1;
    else
    { tipoproduto tp;
    int i=0;
    int voltar;
        struct tipoproduto;
        voltar= fread(&tp,sizeof(tp),1,arq);
		while(voltar==1){

        {
        printf("------------------------------------------------------------");
        printf("\nID do Produto: %d\n",tp.idProduto);
        printf("\nNome: %s\n",tp.nome);
        printf("\nEstoque: %d\n",tp.estoque);
        printf("\nPreco: R$%.2f\n",tp.valor);}
		i++;
		voltar= fread(&tp,sizeof(tp),1,arq);
        }
        fclose(arq);
    }getch();
    return 0;}

//////////////////////////////////////REMOVER PRODUTOS

int Remover(void){
    int rp;
    printf("Remover todos os registros?");
    printf("\n1- Sim  2-Nao:\n");
    scanf("%d",&rp);
    if (rp == 1){
        FILE * arq;
        arq = fopen("estoque.txt","wb+");
        printf("Registros removidos!");
        fclose(arq);}
    getch();}


/////////////////////////////////LOGIN DOS FUNCIONARIOS

bool user_exists(char *user, char *password)
{
    FILE *usuarios_ptr;

    usuarios_ptr = fopen("usuarios.txt", "r");

    if (!usuarios_ptr)
    {
        printf("error: não foi possível abrir o arquivo de usuários.");
        return 2;
    }

    // A linha do arquivo não pode ter mais do que 256 bytes
    char current_line[256];

    // Lê linha a linha do arquivo, e vai salvando a linha na variavel current_line
    while (fgets(current_line, sizeof(current_line), usuarios_ptr))
    {
        // separa a linha pelo caracter |
        char *current_user = strtok(current_line, "|");
        char *current_password = strtok(NULL, "|");

        // remove o \n da senha
        current_password[strcspn(current_password, "\n")] = '\0';

        if (strcmp(user, current_user) == 0 && strcmp(password, current_password) == 0)
        {
            fclose(usuarios_ptr);
            return true;
        }
        else
        fclose(usuarios_ptr);
        return false;
}
    }

#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int opcao=0;
int prx;

//Produto
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

// opcoes
void Menu()
{
system("cls");
printf("------------------------------ Inovatech ------------------------------");
printf("\n1 - Cadastro de produtos\n");
printf("\n2 - Catalogo\n");
printf("\n3 - Remover Registros\n");
printf("\n4 - Voltar ao menu inicial\n"); 
printf("\nEscolha uma das opcoes: \n");
scanf("%d",&opcao);

}


// produtos

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

// cadastrar produtos 

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
	opcao++;
  } while (prx == 1);
    fclose(arq);
    getch();}
    

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

	
//opcoes do menu
int main(void)
{
    FILE *arq;
    int op;

    arq=fopen("estoque.txt","rb+");
    if(arq==NULL){
    arq=fopen("estoque.txt","wb+");
    }
    if(arq!=NULL){

        int fim=0;


            do{

	Menu();
            switch(opcao)
                {
                case 1:
				system("cls");
				cadastro(arq);
                    break;
                case 2:
                system("cls");
				catalogo();
				case 3:
				system("cls");
				Remover();	
                    break;
                case 4:fim=1;
                    break;
                 default: printf("Opcao Invalida\n");
                         }
              }while (!(fim));
    getch();
        }}

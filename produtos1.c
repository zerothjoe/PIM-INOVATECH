#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int opcao=0;

//Struct Produto
typedef struct{
        int  idProduto;
        char  nome[30],estoque[10];
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

// menu de opcoes
void Menu()
{
system("cls");
printf("------------------------------ Inovatech ------------------------------");
printf("\n1 - Cadastro de produtos\n");
printf("\n2 - Catalogo\n");
printf("\n3 - Sair\n");
printf("\nEscolha uma das opcoes: \n");
scanf("%d",&opcao);

}


// catalogo de produtos

int catalogo (void)
{
FILE *arq;
    arq = fopen ("estoque.txt", "rb+");
    if (!arq)
        return 1;
    else
    { tipoproduto tp;
    int i=0;
    int retorno;
        struct tipoproduto;
        retorno= fread(&tp,sizeof(tp),1,arq);
		while(retorno==1){
       
        {
        printf("------------------------------------------------------------");	
        printf("\nID do Produto: %d\n",tp.idProduto);
        printf("\nNome: %s\n",tp.nome);
        printf("\nEstoque: %s\n",tp.estoque);
        printf("\nPreco: R$ %.2f\n",tp.valor);}
		i++;
		retorno= fread(&tp,sizeof(tp),1,arq);
        }
        fclose(arq);
    }getch();
    return 0;}

// cadastrar produtos 

void cadastro(FILE *arq){
    tipoproduto tp;
    printf("---------------------------- Cadastro de Produtos ----------------------------");
    printf("\nid do Produto: ");
    scanf("%d",&tp.idProduto);
    fflush (stdin);
    
    printf("\nNome: ");
	scanf("%s",&tp.nome);
    fflush (stdin);
    
    printf("\nEstoque:");
    scanf("%s",&tp.estoque);
    fflush (stdin);
    
    printf("\nPreco: R$ ");
    scanf("%f",&tp.valor);
	fflush (stdin);
    
	fseek(arq,0,SEEK_END);
    fwrite(&tp,sizeof(tipoproduto),1,arq); //salva na struct tiproduto
	printf("Salvo!");
    return;}
		
    //opcoes do menu
    int main(void)
{
    FILE *arq;
    int op;

    arq=fopen("estoque.txt","rb+");
    if(arq==NULL){
    arq= fopen("estoque.txt","wb+");
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
                    break;
                case 3:fim=1;
                    break;
                 default: printf("Opcao Invalida\n");
                         }
              }while (!(fim));
              printf("Ok!");
    getch();
        }}

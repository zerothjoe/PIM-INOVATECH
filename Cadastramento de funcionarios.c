#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
int opcao, opcao1, opcao2, opcao3, opcao4,i,quant,op;

	struct referencia
	{ char nome[100],cpf[100],tel[100],email[100],end[100];	}
	
	
CA[600];CA[600];CA[600];CA[600];CA[600];CA[600];CA[600];

    
	printf("---------------------------------------------------------\n\n");
	printf("\n1-Cadastrar\n ");
	printf("\n2-Exibir Dados\n ");
	printf("\n3-Alterar\n ");
	printf("\n4-Excluir\n ");
	printf("\n5-Sair\n ");
	printf("---------------------------------------------------------\n\n");
	printf("\n Qual opcao voce deseja acessar? ");
	scanf("%d",&opcao);
		
switch(opcao){

		case 1:
			system("cls");
			printf("\n\n Quantos Cadastros voce deseja realizar?");
	        scanf("%d",&quant);
	     
	        for(i=1;i<=quant;i++){
	        system("cls");
	        printf("\n\n\t\t\t  INICIANDO CADASTRO %d\n",i);
	        printf("\t\t\t -------------------------\n\n");
	         printf("\n Nome Completo: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].nome);
	         printf("\n CPF: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].cpf);
	         printf("\n Telefone: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].tel);
	         printf("\n E-mail: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].email);
	         printf("\n Endereço: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].end);
	         printf("\n\n\t\t");
	         printf("\n\Cadastro realizado com Sucesso!\n\n");
	         system("pause");
	         system("cls");
	         
	
	break;
	
	
	case 2:
	system("cls");
	
	for(i=1;i<=quant;i++){
	system("cls");	
	printf("\n\n\t\t\t  Exibindo Cadastro %d\n",i);
	printf("\t\t\t -------------------------\n\n");
	printf("\n Nome Completo: %s\n",CA [i].nome);
	printf("\n CPF: %s\n",CA [i].cpf);
	printf("\n Telefone: %s\n",CA [i].tel);
	printf("\n E-mail: %s\n",CA [i].email);
	printf("\n Endereço: %s\n",CA [i].end);
	system("pause");
}
	
	
break;

	case 3:
	system("cls");			
	for(i=1;i<=quant;i++){
	printf("\n\n\t\t\t  Alterar Cadastro\n");
	printf("\t\t\t -------------------------\n\n");
	printf("\n 1 - Nome Completo" );
	printf("\n 2 - CPF" );
	printf("\n 3 - Telefone");
	printf("\n 4 - E-mail");
	printf("\n 5 - Endereço");
	printf("Qual a opcao voce deseja acessar?\n");
	scanf("%d",&opcao1);
	
	
switch(opcao1){
	
	case 1:
    for(i=1;i<=quant;i++){
    		system("cls");
    		printf("\n\n Cadastro %d\n",i);
    		printf("Alterar Nome do Comprador: ");
    		fflush(stdin);
    		scanf("%[^\n]s",&CA[i].nome);
    		printf("\n Novo Nome: %s\n\n\t\t");
    		system("pause");
 
	}	
	break;
	
   case 2:
    for(i=1;i<=quant;i++){
    		system("cls");
    		printf("\n\n Cadastro %d\n",i);
    		printf("Alterar CPF do Comprador: ");
    		fflush(stdin);
    		scanf("%[^\n]s",&CA [i].cpf);
    		printf("\n Novo CPF: %s\n\n\t\t");
    		system("pause");
    		
    	}
    	break;
    		
	case 3:
    for(i=1;i<=quant;i++){
    		system("cls");
    		printf("\n\n Cadastro %d\n",i);
    		printf("Alterar Telefone do Comprador: ");
    		fflush(stdin);
    		scanf("%[^\n]s",&CA [i].tel);
    		printf("\n Novo Número: %s\n\n\t\t");
    		system("pause");
	
}

break;

	case 4:
    for(i=1;i<=quant;i++){
    		system("cls");
    		printf("\n\n Cadastro %d\n",i);
    		printf("Alterar E-mail do Comprador: ");
    		fflush(stdin);
    		scanf("%[^\n]s",&CA [i].email);
    		printf("\n Novo E-mail: %s\n\n\t\t");
    		system("pause");
    		
}
break;
	
	case 5:
    for(i=1;i<=quant;i++);{
    		system("cls");
    		printf("\n\n Cadastro %d\n",i);
    		printf("Alterar Endereço do Comprador: ");
    		fflush(stdin);
    		scanf("%[^\n]s",&CA [i].end);
    		printf("\n Novo Endereço: %s\n\n\t\t");
    		system("pause");	
	
}
break;
}
}
      break;
      
	case 4:
    system("cls");
    for(i=1;i<=quant;i++){
    printf("\n\n\t\t\t  Excluir Cadastro\n");
	printf("\t\t\t -------------------------\n\n");
	printf("\n 1 - Nome Completo" );
	printf("\n 2 - CPF" );
	printf("\n 3 - Telefone");
	printf("\n 4 - E-mail");
	printf("\n 5 - Endereço");
	printf("Qual a opcao voce deseja acessar?\n");
	scanf("%d",&opcao4);
	
	
	switch(opcao4){
	case 1:
				
	 for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].nome,0,sizeof(CA [i].nome));
    printf("Nome do Comprador Excluido!\n\n");
    system("pause");
}
    
	break;
	
	case 2:
			
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].cpf,0,sizeof(CA [i].cpf));
    printf("CPF do Comprador Excluido!\n\n");
    system("pause");
}

break;
	case 3:
			
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].tel,0,sizeof(CA [i].tel));
    printf("Telefone do Comprador Excluido!\n\n");
    system("pause");
}

break;

     	case 4:
     		
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].email,0,sizeof(CA [i].email));
    printf("E-mail do Comprador Excluido!\n\n");
    system("pause");
}

break;

     
     	case 5:
     		
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].end,0,sizeof(CA [i].end));
    printf("Endereço do Comprador Excluido!\n\n");
    system("pause");
}

break;
 

      	case 6:
      		
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].nome,0,sizeof(CA [i].nome));
    memset(&CA [i].cpf,0,sizeof(CA [i].cpf));
    memset(&CA [i].tel,0,sizeof(CA [i].tel));
    memset(&CA [i].email,0,sizeof(CA [i].email));
    memset(&CA [i].end,0,sizeof(CA [i].end));
    printf("Todos os dados foram excluidos com sucesso!\n\n");
    system("pause");
          }
 break;

}
}


    case 7:
    	system("cls");
    	printf("Voce realmente deseja sair do sistema?");
    	printf(" 1-Sim\n 2-Nao");
    	scanf("%d",&opcao2);
    	
    		switch(opcao2){
    			case 1:
    				system("cls");
					printf("\n\n Volte sempre!\n\n\n\t\t");
					system("pause");		
	return 0;
	break;		
			
}

	break;
}
}
system("pause");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main (){

	int opcao,opcao1,opcao2,opcao3,opcao4,i,quant;

	
	struct referencia
	{
		
	char nome0[100],nome1[100],nome2[100],nome3[100],nome4[100];
	}
	

		
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
    CA[600];
	

		char nome5[100];
	
	
	system("cls");
	printf("Nome do Funcionario: ");
	fflush(stdin);
	scanf("%[^\n]s",nome5);
	printf("Senha da InovaTech: ");
	scanf("%d",&opcao3);
	
	switch(opcao3){
	 case 18137010:
		 	
	while(opcao!=6){
	while(opcao2!=1){
    system("color f4");
	system("cls");
	
	printf("-----------------------------------------------------\n\n");
	printf("\t\t\t Inovatech\n");
	printf("-------------------------------------------------------------\n\n");
	printf("\t\t  Seja bem vindo(a) %s\n",nome5);
	printf("_________________________________________________________");
	printf("1-Cadastrar\n ");
	printf("2-Exibir Dados\n ");
	printf("3-Alterar\n ");
	printf("4-Excluir\n ");
	printf("5-Informacoes do Sistema\n ");
	printf("6-Sair\n ");
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
	         scanf("%[^\n]s",CA [i].nome0);
	         printf("\n CPF: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].nome1);
	         printf("\n Telefone: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].nome2);
	         printf("\n E-mail: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].nome3);
	         printf("\n Endereço: ");
	         fflush(stdin);
	         scanf("%[^\n]s",CA [i].nome4);
	         printf("\n\n\t\t");
	         system("pause");
	         system("cls");
	       
}
	
	break;
	
	
	case 2:
	system("cls");
	
	for(i=1;i<=quant;i++){
	system("cls");	
	printf("\n\n\t\t\t  Exibindo Cadastro %d\n",i);
	printf("\t\t\t -------------------------\n\n");
	printf("\n Nome Completo: %s\n",CA [i].nome0);
	printf("\n CPF: %s\n",CA [i].nome1);
	printf("\n Telefone: %s\n",CA [i].nome2);
	printf("\n E-mail: %s\n",CA [i].nome3);
	printf("\n Endereço: %s\n",CA [i].nome4);
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
    		scanf("%[^\n]s",&CA[i].nome0);
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
    		scanf("%[^\n]s",&CA [i].nome1);
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
    		scanf("%[^\n]s",&CA [i].nome2);
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
    		scanf("%[^\n]s",&CA [i].nome3);
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
    		scanf("%[^\n]s",&CA [i].nome4);
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
    memset(&CA [i].nome0,0,sizeof(CA [i].nome0));
    printf("Nome do Comprador Excluido!\n\n");
    system("pause");
}
    
	break;
	
	case 2:
			
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].nome1,0,sizeof(CA [i].nome1));
    printf("CPF do Comprador Excluido!\n\n");
    system("pause");
}

break;
	case 3:
			
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].nome2,0,sizeof(CA [i].nome2));
    printf("Telefone do Comprador Excluido!\n\n");
    system("pause");
}

break;

     	case 4:
     		
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].nome3,0,sizeof(CA [i].nome3));
    printf("E-mail do Comprador Excluido!\n\n");
    system("pause");
}

break;

     
     	case 5:
     		
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].nome4,0,sizeof(CA [i].nome4));
    printf("Endereço do Comprador Excluido!\n\n");
    system("pause");
}

break;
 

      	case 6:
      		
	for(i=1;i<=quant;i++){			
    system("cls");
    memset(&CA [i].nome0,0,sizeof(CA [i].nome0));
    memset(&CA [i].nome1,0,sizeof(CA [i].nome1));
    memset(&CA [i].nome2,0,sizeof(CA [i].nome2));
    memset(&CA [i].nome3,0,sizeof(CA [i].nome3));
    memset(&CA [i].nome4,0,sizeof(CA [i].nome4));
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
	}
}
	break;
}
}
system("pause");
	return 0;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	


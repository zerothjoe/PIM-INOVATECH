#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <stdbool.h>


#define ENTER 13    // CÓDIGO ASCII DA TECLA ENTER
#define BACKSPACE 8 // CÓDIGO ASCII DA TECLA BACKSPACE
#define SPACE 32    // CÓDIGO ASCII DA TECLA BARRA DE ESPACO
#define TAB 9       // CÓDIGO ASCII DA TECLA BACKSPACE
#define ESC 27      // CÓDIGO ASCII DA TECLA ESC


// CORES
#define RED2        "\x1b[31m"
#define RESET       "\x1b[0m"
#define RED         "\e[0;31m" //cores em ANSI utilizadas
#define GRAY        "\e[0;37m"
#define DARK_GRAY 	"\e[1;30m"
#define GREEN	    "\e[0;32m"
#define BLACK       "\e[0;30m"
#define YELLOW      "\e[0;33m"
#define BLUE        "\e[0;34m"
#define PURPLE      "\e[0;35m"
#define CYAN        "\e[0;36m"
#define WHITE       "\e[0;37m"
#define BG_GREEN    "\e[42m"
#define BG_BLUE     "\e[44m"
#define HWHITE      "\e[0;97m"
#define HRED        "\e[0;91m"

 // HEADER_H_INCLUDED

///// VARIAVEIS///////////////

char adminlog[20] = "joe";
char adminpass[20] = "lindo";
char login[20]; login2[20];
char senha[20]; senha2[20];
char ch = '\0';
int ctecla=0, menu=0, loop=0;
char Vrelatorio[256];
int opcao, opcao1, opcao2, opcao3, opcao4,i,quant,op;
int produto(FILE *arq,int idProduto);
extern int opcao5;


/////////////////////////////////////////////////////////////
struct tipo_usuario{
	char nome[50];
	char email[50];
	int cpf;
	int idade;
};

 struct tipo_usuario usuario;

////////////////////////////////////////////////////////////////////

bool user_exists(char *user, char *password);
void Menu();
int catalogo (void);
void cadastro();
int Remover(void);


/////////////////////////////////////////////////////////////////////

#endif

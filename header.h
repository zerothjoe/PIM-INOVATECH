#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>



#define ENTER 13    // C”DIGO ASCII DA TECLA ENTER
#define BACKSPACE 8 // C”DIGO ASCII DA TECLA BACKSPACE
#define SPACE 32    // C”DIGO ASCII DA TECLA BARRA DE ESPACO
#define TAB 9       // C”DIGO ASCII DA TECLA BACKSPACE
#define ESC 27      // C”DIGO ASCII DA TECLA ESC


// CORES
#include <stdbool.h>
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

#endif // HEADER_H_INCLUDED

///// VARIAVEIS///////////////

char adminlog[20] = "joe";
char adminpass[20] = "lindo";
char login[20];
char senha[20];
char ch = '\0';
int ctecla=0, menu=0, loop=0;
char Vrelatorio[256];


//////////////////////////////


///////////////////////////////////////////////////FUN«√O LOG 2/////////////////////////////////////////////////////

bool user_exists(char *user, char *password)
{
    FILE *usuarios_ptr;

    usuarios_ptr = fopen("usuarios.txt", "r");

    if (!usuarios_ptr)
    {
        printf("error: n√£o foi poss√≠vel abrir o arquivo de usu√°rios.");
        return 2;
    }

    // A linha do arquivo n√£o pode ter mais do que 256 bytes
    char current_line[256];

    // L√™ linha a linha do arquivo, e vai salvando a linha na variavel current_line
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



///////////////////////////////////////////////////FUN«√O LOG 2/////////////////////////////////////////////////////

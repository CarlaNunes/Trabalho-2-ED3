#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

typedef int tipoChave;
typedef int rrn;
typedef char* string;

 typedef struct pessoa{
    char removido; //Verificar esse valor depois, na revisão
    int idPessoa;
    char pessoa[40];
    int idade;
    char twitterPessoa[15];
    
}Pessoa;

typedef struct index_p  {
	tipoChave idPessoa;
  int rrn;
}Index_p;



Pessoa pessoa[2000];
Pessoa pessoa_aux[200];//Para a funcionalidade 4
Pessoa pessoa_aux2[200];//Para a funcionalidade 5
Index_p index_p[2000];
//**************************************************************************
//___________Funções_______________________________
int le_arquivo(FILE *arquivo,char nomeArquivoCsv[20]);
void lidando_idade_negativas(FILE *arquivo,int cont);
void escreve_Binario2(FILE *arquivo, int cont,char nomeArquivoBinario[20]);

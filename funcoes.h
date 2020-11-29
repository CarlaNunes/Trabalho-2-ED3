#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

typedef int tipoChave;
typedef int rrn;
typedef char* string;

typedef struct dados{
    char removido; //Verificar esse valor depois, na revisão
    int idPessoaQueSegue; 
    int idPessoaQueESeguida;
    char grauAmizade[3]; 
    char dataInicioQueSegue[10];
    char dataFimQueSegue[10];
}Dados;

typedef struct index_p  {
	tipoChave idPessoa;
  int rrn;
}Index_p;



Dados dados[2000];
Dados dados_aux[200];//Para a funcionalidade 4
Dados dados_aux2[200];//Para a funcionalidade 5
Index_p index_p[2000];

//**************************************************************************
//___________Funções_______________________________
int le_arquivo(FILE *arquivo,char nomeArquivoCsv[20]);
void lidando_idade_negativas(FILE *arquivo,int cont);
void escreve_Binario2(FILE *arquivo, int cont,char nomeArquivoBinario[20]);
int comp(const void *p, const void *q);
void atualizar_status(FILE *arquivo,int cont,char nomeArquivoBinario[20]);
void binarioNaTela2(char *nomeArquivoBinario);

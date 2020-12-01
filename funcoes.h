#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
typedef int tipoChave;


typedef struct dados{
    char removido;
    int idPessoaQueSegue; 
    int idPessoaQueESeguida;
    char grauAmizade[3]; 
    char dataInicioQueSegue[10];
    char dataFimQueSegue[10];
}Dados;

Dados dados[2000];

typedef struct pessoa{
    char removido; 
    int idPessoa;
    char pessoa[40];
    int idade;
    char twitterPessoa[15];
    
}Pessoa;
typedef struct index_p  {
	tipoChave idPessoa;
  int rrn;
}Index_p;

Index_p index_p[2000];
Pessoa pessoa[2000];


//**************************************************************************
//___________Funções_______________________________
int le_arquivo(FILE *arquivo,char nomeArquivoCsv[20]);
void escreve_Binario2(FILE *arquivo, int cont,char nomeArquivoBinario[20]);
int comp2(const void *p, const void *q);
void atualizar_status(FILE *arquivo,int cont,char nomeArquivoBinario[20]);
void binarioNaTela2(char *nomeArquivoBinario);
void exibir_campos(FILE *arquivo, int cont, char nomeArquivoBinario[20]);
void escreve_Ordenado(FILE *arquivo, int cont,char nomeArquivoBinario[20], char nomeArquivoOrdenado[20]);
void binarioNaTela1(char nomeArquivoBinario[20], char nomeArquivoIndice[20]);
void exibir_campos2(FILE *arquivo, int cont, char nomeArquivoOrdenado[20]);


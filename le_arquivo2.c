#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"
/*
A função abaixo, irá ler o arquivo csv, composto pelas pessoas (trabalho 1) e armazenar os valores lidos em cada v=componente da struct correspondente.
Tudo isso, usando a função strtok, que quando encontrar uma vírgula faz, a "divisão".
*/

int le_arquivo2(FILE *arquivo,char nomeArquivoCsv[20]){
    int i = 0;

    int bufSize = 300;
    char cabecalho[bufSize];

    if ((arquivo = fopen(nomeArquivoCsv, "r")) == NULL) {
        printf("Falha na abertura do arquivo.\n");
    } else {
#if 1 
        const char separador[2] = ",";
        char buffer[bufSize];
        fgets (cabecalho, bufSize, arquivo); 
        while( fgets (buffer, bufSize, arquivo)!=NULL ) {
           
            char *token = strtok(buffer, separador);
            
                
                //printf("idPessoa: %s\n", token);
              dados[i].idPessoaQueSegue = atoi(token);
         
               token = strtok(NULL, separador);
               dados[i].idPessoaQueESeguida = atoi(token);

               token = strtok(NULL, separador); 
               strcpy(dados[i].grauAmizade, token); 

               token = strtok(NULL, separador); 
               strcpy(dados[i].dataInicioQueSegue, token); 

               token = strtok(NULL, separador); 
               strcpy(dados[i].dataFimQueSegue, token); 
            
               
              
             
            i += 1;
             
        }
     
#endif
        fclose(arquivo);
    }
    return i;
}

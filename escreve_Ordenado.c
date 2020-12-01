
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"

void escreve_Ordenado(FILE *arquivo, int cont,char nomeArquivoBinario[20], char nomeArquivoOrdenado[20]){

char status = '0',removido;
  char grau[3],data1[10],data2[10];
  int quantidadePessoas = cont;
  char lixo[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";

  if ((arquivo = fopen(nomeArquivoOrdenado, "wb")) == NULL) {
        printf("Falha no carregamento do arquivo.\n");
    }
    
     fwrite(&status,sizeof(char) ,1, arquivo);
     fwrite(&quantidadePessoas,sizeof(int) ,1, arquivo);
     fwrite(&lixo, sizeof(char) ,1, arquivo);

    for(int i = 0; i<cont; i++){
    
            int tam = 0, tam2 = 0;
            removido = '1';
            dados[i].removido = '1';
            fwrite(&removido,1,sizeof(char),arquivo);
            int id = dados[i].idPessoaQueSegue;
            fwrite(&id,1,sizeof(int),arquivo);

            int id2 = dados[i].idPessoaQueESeguida;
            fwrite(&id2,1,sizeof(int),arquivo);
           
            strcpy(grau,dados[i].grauAmizade);
            fwrite(&grau,1,sizeof(char),arquivo);
            
            strcpy(data1,dados[i].dataInicioQueSegue);
            fwrite(&data1,1,sizeof(char),arquivo);
           
            strcpy(data2,dados[i].dataFimQueSegue);
            fwrite(&data2,1,sizeof(char),arquivo);
         
    }


    fclose(arquivo);

}

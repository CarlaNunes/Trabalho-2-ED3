#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"

//Nessa função, quando o nome o twiiter foram menores que os declarados vamos completar com "$"
//Refazer....
//Versão com impressão campo a campo
//Também com preenchimento de campos "pequenos com lixo"
void escreve_Binario2(FILE *arquivo, int cont,char nomeArquivoBinario[20]){
  
  char status = '0',removido;
  char grau[3],data1[10],data2[10];
  int quantidadePessoas = cont;
  char lixo[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";

  if ((arquivo = fopen(nomeArquivoBinario, "wb")) == NULL) {
        printf("Falha na abertura do arquivo.\n");
    }
     // fprintf(arquivo,"%s%d%s",&status,quantidadePessoas,lixo);
     fwrite(&status,sizeof(char) ,1, arquivo);
     fwrite(&quantidadePessoas,sizeof(int) ,1, arquivo);
     fwrite(&lixo, sizeof(char) ,1, arquivo);

  else{
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
            fwrite(&grau,1,sizeof(char),arquivo);

            strcpy(grau,dados[i].dataFimQueSegue);
            fwrite(&grau,1,sizeof(char),arquivo);

        }
  }
      
       
    


    fclose(arquivo);

}

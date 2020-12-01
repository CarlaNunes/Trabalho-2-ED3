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
  
  char status = '0',removido;//Primeiro item do cabeçalho
  char grau[3],data1[10],data2[10];//Variaveis auxiliares para armazenar os valores da struct para impressão.
  int quantidadePessoas = cont;//Segundo item do cabeçalho
  char lixo[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";//Terceiro item do cabeçalho

  if ((arquivo = fopen(nomeArquivoBinario, "wb")) == NULL) {
        printf("\n Falha no carregamento do arquivo.\n");
    }
     // fprintf(arquivo,"%s%d%s",&status,quantidadePessoas,lixo);
   //------Início escrita em arquivo do cabeçalho--------------
     fwrite(&status,sizeof(char) ,1, arquivo);
     fwrite(&quantidadePessoas,sizeof(int) ,1, arquivo);
     fwrite(&lixo, sizeof(char) ,1, arquivo);
  //------Fim escrita em arquivo do cabeçalho--------------
  else{
    for(int i = 0; i<cont; i++){
      //------------Início escrita dos valores da struct--------
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
            //------------Fim escrita dos valores da struct--------
        }
  }
      
       
    


    fclose(arquivo);

}

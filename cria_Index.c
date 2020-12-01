
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"
/*
Cria o arquivo de índice primário.
Recebe como parãmetros: ponteiro para arquivo,quantidade de pessoas lidas no arquivo csv e o nome que o arquivo de indice irá ter, respectivamente.
*/
void cria_Index(FILE *arquivo,int cont,char nomeArquivoIndice[20]){
 
  char status = '0'; //Arquivo de dados consistente. Ao finalizar terá valor igual a -1.//Primeiro item do cabeçalho do arquivo index
  char lixo[] = "$$$$$$$"; //Último item do cabeçalho do arquivo index
  int id = 0; //Id auxiliar, para evitar possível impressão
  int aux = 0;
  //nt rRN = 0;
  int i = 0;
   if ((arquivo = fopen(nomeArquivoIndice,"wb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
  
  
  else{
      fwrite(&status, sizeof(char) , 1 , arquivo);
      fwrite(lixo, sizeof(char) , 1,  arquivo);
      for(int i = 0; i<cont; i++){
       //Impressão campo por campo, da struct index_p. Que irá conter os dados para gerar o arquivo de indice primário.
        fwrite(&index_p.idPessoa,1, sizeof(Index_p),arquivo);
        fwrite(&index_p.rrn,1, sizeof(Index_p),arquivo);
        
       }
    
  }
 fclose(arquivo);

}

      
  


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"

/*********Funcionalidade 8********************************/
//Inserir funcionalidade 3
//Fará a operação de junção
void juncao(FILE *arquivo1, FILE *arquivo2,int cont, char nomeArquivoBinario[20],char  nomeArquivoOrdenado[20]){
	 int tam = 0; 
	 int i = 0;
	 int j = 0;
   char status = '0',removido;
   char grau[3],data1[10],data2[10];
   int quantidadePessoas = cont;
   char lixo[27],lixo2[40];   
    fread(&status, sizeof(char) ,1 ,arquivo1);
    fread(&quantidadePessoas,sizeof(int),1 ,arquivo1);      
    fread(lixo2,sizeof(char),1 ,arquivo1);

    fread(&status, sizeof(char) ,1 ,arquivo2);
    fread(&quantidadePessoas,sizeof(int),1 ,arquivo2);      
    fread(lixo,sizeof(char),1 ,arquivo2);
	 
    for(i = 0; i < cont;i++){
        for(j = 0; j <cont; j++)
         fread(&dados,sizeof(Dados),1,arquivo1);
         fread(&pessoa,sizeof(Dados),1,arquivo2);
      }
    
      for(i = 0; i < cont;i++ ){
        for(j = 0; j <cont; j++)   
        tam = strlen(pessoa[j].pessoa);
        if(dados[i].idPessoaQueSegue == pessoa[j].idPessoa){
          //Exibição de dados
          printf("\nDados da pessoa de código: %d \n",pessoa[j].idPessoa);
          if(tam > 3){
             printf("\nNome: %s\n",pessoa[j].pessoa); 
          }
          else if(tam > 3){
             printf("\nNome: - \n");
          }
          printf("\nNome: %s\n",pessoa[j].pessoa); 
          if(pessoa[j].idade != 0){
            printf("\nIdade: %d \n",pessoa[j].idade);
          }
          else if(pessoa[j].idade == 0){
            printf("\nIdade: - \n");
          }
          printf("\nTwitter: %s\n",pessoa[j].twitterPessoa);
          printf("\n\n");
          printf("\nSegue a pessoa de codigo:%d \n",dados[i].idPessoaQueESeguida);
          int grauAmizade = 0;
          grauAmizade = atoi(dados[i].grauAmizade);
          if(grauAmizade == 0){
           printf("\nJustificativa para seguir: celebridade\n");    
          }
          else if(grauAmizade == 1){
            printf("\nJustificativa para seguir: amiga de minha amiga\n");
          }
          else if(grauAmizade == 2){
            printf("\nJustificativa para seguir: segue porque é minha amiga\n");
          }
          printf("\nComeçou a seguir em: %s\n",dados[i].dataInicioQueSegue);
          printf("\nParou de seguir em: %s\n",dados[i].dataFimQueSegue);
          printf("\n\n");
          
        }
       
         else{                        
           printf("Registro inexistente.");
         }
      }  
      fclose(arquivo1);
      fclose(arquivo2);
           
    }

    

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"

int main() {
   
    FILE *arquivo;
    int cont = 0; // número de pessoas lidas 
    int i = 0,alternativa = 0,idade = 0,idade2 = 0, id2 = 0;
    int vet[2000],vet_posi[200];
    char nomeArquivoBinario[20];
    char nomeArquivoIndice[20];
    char nomeArquivoCsv[20];
    char nome[40], aux[40],nome2[40];
    char twitter[15],twitter2[15];
    char campo[10];
    int numInseri = 0;
     int numAtu = 0;
     int retorno = 0;
    ///****Aqui começa a inserção dos valores de entrada para o manuseio dos arquivos
    scanf("%d",&alternativa);
    //printf("Valor da alternativa: %d",alternativa);
    scanf("%s",nomeArquivoCsv);
    retorno = retirar_ponto(nomeArquivoCsv);
    printf("\n Valor retorno = %d \n ",retorno);
    if(retorno != 0){
       scanf("%s",nomeArquivoBinario);
       scanf("%s",nomeArquivoIndice);
    }
   

    cont = le_arquivo(arquivo,nomeArquivoCsv); //Número de pessoas lidas
   // printf("pessoas lidas: %d\n",cont);
    lidando_idade_negativas(arquivo,cont);
    escreve_Binario2(arquivo,cont,nomeArquivoBinario);
   // le_index(arquivo,cont);
    //Criando preenchendo a struct de indice primário
    for(i = 0; i < cont; i++){ 
      index_p[i].idPessoa = pessoa[i].idPessoa;
      index_p[i].rrn = i;
    }
    
  //Função nativa do C, para ordenar os indices
   qsort(index_p,cont,sizeof(struct index_p),comp);
   //Criando o arquivo de indice primário depois da ordenação  
   insereIndex(arquivo,cont,nomeArquivoIndice);
   
   //Funcionalidade 1, CONFERIDA!
   if(alternativa == 1){
    atualizar_status(arquivo,cont,nomeArquivoBinario); 
    binarioNaTela1(nomeArquivoBinario,nomeArquivoIndice);
    //exibir_campos(arquivo,cont,nomeArquivoBinario);
   }  
  
    return (0);


}


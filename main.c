#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"


/*
O que falta:
-Funcionalide 8 ok 
-Parte do trabalho 1 agora -->>>Verificar
-Verificar possiveis erros
-Testes
-Colocar no git ok
-Colocar no run codes 
-Colocar função atualiza status
-Documentar código-->>>Incompleto
-Verificar se as especificações foram respeitadas
*/

int main() {
   
    FILE *arquivo;
    int cont = 0; // número de pessoas lidas 
    int i = 0,alternativa = 0,idade = 0,idade2 = 0, id2 = 0;
    int vet[2000],vet_posi[200];
    char nomeArquivoBinario[20];
    char nomeArquivoOrdenado[20];
    char nomeArquivoCsv[20];
    char nomeArquivoIndice[20];
    int numInseri = 0;
     int numAtu = 0;
     int retorno = 0;
    ///****Aqui começa a inserção dos valores de entrada para o manuseio dos arquivos
    scanf("%d",&alternativa);
    scanf("%s",nomeArquivoCsv);
    scanf("%s",nomeArquivoBinario);
    scanf("%s",nomeArquivoOrdenado); 
    //********Arquivo Indice
    scanf("%s",nomeArquivoIndice); 
    for(i = 0; i < cont; i++){ 
      index_p[i].idPessoa = pessoa[i].idPessoa;
      index_p[i].rrn = i;
    }
    escreve_Binario2(arquivo,cont,nomeArquivoBinario); 
  //Função nativa do C, para ordenar os indices
   //A função abaixo, é nativa do C. Ela aplica o algoritmo de ordenaçãop qsort, juntamente com a função 'comp' que ordena de modo decrescente os elementos lidos
   //O uso, foi recomendado por um colega de curso que já se formou.
   
   qsort(index_p,cont,sizeof(struct index_p),comp);
   //Criando o arquivo de indice primário depois da ordenação  
   insereIndex(arquivo,cont,nomeArquivoIndice);       
    //scanf("%s",nomeArquivoBinario);
    //printf("Valor da alternativa: %d",alternativa);
      cont = le_arquivo(arquivo,nomeArquivoCsv); //Número de pessoas lidas
        for(i = 0; i<cont; i++){
          //O que foi feito abaixo, tem como objetivo limitar os valores atribuidos e vitar erros. Erros como data iniíco = data inicio + data fim 
          dados[i].dataInicioQueSegue[10] = '\0';
          dados[i].dataFimQueSegue[10] = '\0';
        }
        escreve_Binario3(arquivo,cont,nomeArquivoBinario);
        if(alternativa == 6){
          scanf("%s",nomeArquivoCsv);
          scanf("%s",nomeArquivoBinario);
    
          //scanf("%s",nomeArquivoBinario);
          //cont = le_arquivo(arquivo,nomeArquivoCsv); 
          //exibir_campos(arquivo, cont, nomeArquivoBinario);
          binarioNaTela2(nomeArquivoBinario);
        }
        if(alternativa == 7){

            //scanf("%s",nomeArquivoCsv);
           //scanf("%s",nomeArquivoBinario);
           //scanf("%s",nomeArquivoOrdenado); 
           qsort(dados,cont,sizeof(struct dados),comp2);

           
           escreve_Ordenado(arquivo, cont, nomeArquivoBinario,nomeArquivoOrdenado);
           //exibir_campos2(arquivo, cont, nomeArquivoOrdenado);
           binarioNaTela1(nomeArquivoBinario, nomeArquivoOrdenado); 
       }
        
       
       if(alternativa == 8){
          scanf("%s",campo);
        if(strcmp("id",campo)==0){
          int id = 0;
          //printf("\n Por favor, insira o id: \n");
          scanf("%d",&id);
          int retorno = 0;
          busca_Binaria(index_p,cont,id);
          retorno =  busca_Binaria(index_p,cont,id);

      // printf("\n Valor de retorno: %d\n",retorno);
          if(retorno < 0){
             printf("\n Registro não encontrado!"); 
          }
       }
   

  
    return (0);
}

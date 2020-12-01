#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"
/*
Irá ordenar de modo decrescente os id's para o uso posterior da função qsort.
*/
int comp(const void *p, const void *q) {
  //A função usa duas instancias para a varíavel id e as compara
  struct index_p *a = (struct index_p*)p; //Primeira instãncia
  struct index_p *b = (struct index_p*)q;//Segunda instância

  if( a->idPessoa > b->idPessoa )
    return 1; //Retorna 1, logo a será escrita
  else if (b->idPessoa < a->idPessoa)
    return -1; // Retorna -1, logo b será escrita
  else
    return 0;//Instâncias iguais
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#include "funcoes.h"
/*
Irá ordenar de modo decrescente, pelo idPessoaQueSegue, se caso, este atributo for igual, usare
*/

int comp2(const void *p, const void *q) {
  struct dados *a = (struct dados*)p;
  struct dados *b = (struct dados*)q;

  if( a->idPessoaQueSegue > b->idPessoaQueSegue){
    return 1;
  }  
  else if (b->idPessoaQueSegue < a->idPessoaQueSegue){
    return -1;
  }  
  else if(b->idPessoaQueSegue == a->idPessoaQueSegue){
       if( a->idPessoaQueESeguida > b->idPessoaQueESeguida)
          return 1;
      else if (b->idPessoaQueESeguida < a->idPessoaQueESeguida)
        return -1;
      else if(a->idPessoaQueESeguida == b->idPessoaQueESeguida){
           if( a->dataInicioQueSegue > b->dataInicioQueSegue)
             return 1;
           else if (b->dataInicioQueSegue < a->dataInicioQueSegue)
              return -1;
             }
           else
              return 0;  
         
   }  
  else
    return 0;
}

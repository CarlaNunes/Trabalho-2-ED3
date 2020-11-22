void lidando_idade_negativas(FILE *arquivo,int cont){
  int i = 0, nova_idade = 0;
  for(i = 0; i < cont; i++){
    if(pessoa[i].idade < 0){
      pessoa[i].idade = 0;
     // printf("\n Idade: %d",pessoa[i].idade);
    }
    else{
      //printf("\n Idade sem mudanças: %d",pessoa[i].idade);
    }
  }
  //Testando as idadePessoas

}
//Nessa função, quando o nome o twiiter foram menores que os declarados vamos completar com "$"
//Refazer....
//Versão com impressão campo a campo
//Também com preenchimento de campos "pequenos com lixo"

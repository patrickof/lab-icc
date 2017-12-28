#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define TAM 100



typedef struct lista_estatica{
  int *vetor[TAM];
  int nroElem;
}LISTA_ESTATICA;

LISTA_ESTATICA *criar_lista (){
  LISTA_ESTATICA *lista = (LISTA_ESTATICA*) malloc(sizeof(LISTA_ESTATICA));


  if(lista!= NULL){
    lista->nroElem = 0;
  }
  return lista;

}

void imprime_lista (LISTA_ESTATICA *lista){

    if(lista == NULL) return ;

    int i;

    for(i=0; i<lista->nroElem; i++){
      printf("\n%d: %d", i, lista->vetor[i]);
      printf("\n");
    }

}

int inserir(LISTA_ESTATICA *lista, int a){
    int i, *k;

    if(lista != NULL && lista->nroElem != TAM){

       for(i=0; i<a; i++){
          scanf("%d", &k);
          lista->vetor[(lista->nroElem)] = k;
          lista->nroElem ++;
    }
       return 1;
  }
}

void apagar(LISTA_ESTATICA *lista){
   if(lista!=NULL){
     free(lista);
   }
}

int main() {

  int i;

  LISTA_ESTATICA *li = criar_lista();

  inserir(li, 5);
  imprime_lista(li);
  apagar(li);
  imprime_lista(li);
  return 0;
}

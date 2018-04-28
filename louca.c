#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "louca.h"

void *criarlouca( Louca *p, char tipo, char comp, float preco, int quantidade){
  p->tipo=tipo;
  p->comp=comp;
  p->quantidade=quantidade;
}

void *vertipo(Louca *p, char tipo){
  if(p==NULL){
  printf(" tipo nao existe\n");
  return p;
}
printf("tipo: %c\n", p->tipo);
}
void *vercomp(Louca *p,char comp){
  if(p==NULL){
  printf(" composicao nao existe\n");
  return p;
}
printf("tipo: %c\n", p->comp);
}
void *verpreco(Louca *p, float preco, int quantidade){
  float res;
  res = preco*quantidade;
  
  printf("o preço é: %f \n", res);
  return p;
}
void *verquantidade( Louca *p, int quantidade){
  printf("quantidade: %d \n", p->quantidade);
  return p;
}
void imprime(Louca *p){
  
  printf("tipo: %c\n", p->tipo);
  printf("o composicao é: %c \n", p->comp);
  printf("o preço é: %f \n", p->preco);
  printf("o quantidade é: %d \n", p->quantidade);
}
Louca * exclui(Louca *b){
  b=NULL;
return b;
}

// lista_uni.c: Definiremos os nós, a estrutura interna da lista e implementar as funções

#include <stdio.h>
#include <stdlib.h>
#include "lista_uni.h"

struct no{
    Estudante estudante; //armazena os dados de um estudante
    struct no *proximo;
};
struct lista{
    struct no *inicio; //primeiro nó
    struct no *fim; //último nó
    int qtd; //quantia de estudantes
};

Lista* criar_lista(void){
    Lista *lista = malloc(sizeof(Lista));
    if(lista != NULL){
        lista->inicio = NULL;
        lista->fim = NULL;
        lista->qtd = 0;
    }
    return lista;
}

// int inserir(Lista *lista, const Estudante *estudante);

// const Estudante* buscar(Lista *lista, const char *matricula);

// void destruir_lista(Lista *lista);
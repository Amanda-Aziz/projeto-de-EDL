// lista_uni.h: Declaramos o tipo Lista e os protótipos das funções

// Função para criar a lista
// Função para inserir estudantes
// Função para buscar por matrícula
// Função para destruir a lista


#ifndef LISTA_UNI_H
#define LISTA_UNI_H

#include "estudante_uni.h"

typedef struct lista Lista;

Lista* criar_lista(void);

int inserir(Lista *lista, const Estudante *estudante);

const Estudante* buscar(Lista *lista, const char *matricula);

void destruir_lista(Lista *lista);

#endif
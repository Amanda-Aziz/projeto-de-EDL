// estudante_uni.h: Definimos o tipo Estudante e seus atributos

//============================== fazer:
// Estrutura Estudante
// Estrutura do nó
// Estrutura da lista
// Função para criar a lista
// Função para inserir estudantes
// Função para buscar por matrícula
// Função para destruir a lista
// Testes com estudantes fictícios

//============================== dps:
// Leitura dos 10 milhões de registros.
// Adaptação ao formato real do arquivo.
// Confirmação dos tamanhos dos campos.
// Experimentos oficiais de desempenho.
// Tabelas e gráficos com os resultados reais.

#ifndef ESTUDANTE_UNI_H
#define ESTUDANTE_UNI_H

#define TAM_MATRICULA 11
#define TAM_NOME 150
#define TAM_CURSO 150

typedef struct {
    char nome[TAM_NOME];
    char matricula[TAM_MATRICULA];
    char curso[TAM_CURSO];
}Estudante;

#endif
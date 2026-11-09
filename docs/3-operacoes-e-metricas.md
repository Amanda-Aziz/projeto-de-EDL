## Operações e métricas

Para cada volume de dados, realizar:

. Inserção: medir separadamente o tempo necessário para inserir os registros nos intervalos de 0–
30%, 30–60% e 60–100%.

. Busca: após cada etapa de inserção, realizar 10.000 buscas por matrículas existentes, selecionadas
aleatoriamente entre os registros já inseridos, e medir o tempo total.

. Colisões: contabilizar, em cada intervalo de inserção, quantas vezes uma nova matrícula produz um
índice hash inicial que já foi produzido por outra matrícula.

. Fator de carga: calcular o fator de carga das tabelas hash após cada etapa de inserção.

resultados anotar aqui

## Tratamento de Colisões

### Endereçamento Aberto: 
No endereçamento aberto, quando ocorre uma colisão, a chave de pesquisa é adicionada 
a outra posição da tabela hash. Isso significa que, se duas chaves de pesquisa diferentes têm o mesmo valor 
hash, a segunda chave de pesquisa é adicionada a outra posição da tabela hash. A principal vantagem do 
endereçamento aberto é que ele é eficiente em termos de espaço e desempenho, mas a principal desvantagem é 
que ele é mais complexo de implementar.

## Fator de Carga

O fator de carga é a razão entre o número de chaves de pesquisa e o número de posições da tabela hash.
Quanto maior o fator de carga, maior a probabilidade de colisões. Por isso, é importante manter o fator de carga 
baixo, para garantir um bom desempenho da tabela hash. Um fator de carga ideal é menor que 0,7, ou seja, menos 
de 70% das posições da tabela hash estão ocupadas.

O fator de carga é calculado da seguinte forma:

NK = número de chaves de pesquisa
NP = número de posições da tabela hash

NK / NP = fator de carga

Por exemplo, se a tabela hash tem 100 posições e 70 chaves de pesquisa, o fator de carga é 0,7.

70 / 100 = 0,7

## Redimensionamento

Quando o fator de carga é maior que 0,7, é necessário redimensionar a tabela hash.
O redimensionamento da tabela hash é feito da seguinte forma:

    Crie uma nova tabela hash com o dobro do tamanho da tabela hash original
    Adicione todas as chaves de pesquisa da tabela hash original à nova tabela hash
    Descarte a tabela hash original

O redimensionamento da tabela hash é uma operação custosa, mas é necessária para garantir um bom desempenho da tabela hash.

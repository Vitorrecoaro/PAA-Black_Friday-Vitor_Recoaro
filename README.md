# Trabalho prático 02 - Disciplina de Projeto de Análise de Algoritmos - UFSCar

## Introdução:
Todo ano é a mesma coisa. A tal da black friday acaba se revelando uma black fraude. Mas não na loja do seu Florestan. Lá o desconto é pra valer! A promoção de black friday na loja do seu Florestan foi no esquema compre 3, mas pague 2. Sempre que alguém passa no caixa com 3 ou mais produtos, leva o mais barato de graça. Como você não é nada bobo, decidiu passar várias vezes no caixa, cada uma delas com 3 produtos, para ganhar mais descontos. Como você não é nada bobo (mesmo!), quer aproveitar essa estratégia para conseguir o maior desconto possível.

Sua missão agora é criar um algoritmo que te indique qual é o maior desconto possível que você pode conseguir na black friday do seu Florestan.

## Entrada:
Cada instância está armazenada em um arquivo com extensão “.in”. A única linha a ser lida da entrada padrão contém o nome de tal arquivo contendo a instância. Esse nome deve ser usado para ler o arquivo da instância, que se encontra na mesma pasta que o executável.

Cada instância contém um único caso de teste. A primeira linha indica o número $N (2 ≤ N ≤ 10^6)$ de itens que você vai comprar na loja. A próxima  linha contém os preços $P_i (1 ≤ Pi ≤ 10^7)$, para $i = 1, . . . , N$, de cada um dos  itens da sua lista. Todos os valores de entrada são inteiros.

## Saída:
Ao final da execução, seu programa deve imprimir um único valor inteiro, indicando qual  ́e o maior desconto que você conseguir ́a na promoção. Note que, esse maior desconto corresponde à soma dos valores de todos os itens pelos quais você não precisou pagar.

## Exemplo:
### Entrada:
8

500 100 125 310 220 150 100 400

### Saída:
435
/*

UFSCAR - PAA - Trabalho prático 02 - ENPE 2021.2

Aluno: Vitor de Almeida Recoaro.
RA: 790035.
Curso: BCC - Bacharelado em Ciência da Computação.

--------------------------RESUMO TRABALHO----------------------------
Todo ano é a mesma coisa. A tal da black friday acaba se revelando uma black fraude.
Mas não na loja do seu Florestan. Lá o desconto é pra valer! A promoção de black friday
na loja do seu Florestan foi no esquema compre 3, mas pague 2. Sempre que alguém passa
no caixa com 3 ou mais produtos, leva o mais barato de graça. Como você não é nada bobo,
decidiu passar várias vezes no caixa, cada uma delas com 3 produtos, para ganhar mais descontos.
Como você não é nada bobo (mesmo!), quer aproveitar essa estratégia para conseguir o maior
desconto possível.

Sua missão agora é criar um algoritmo que te indique qual é o maior desconto possível
que você pode conseguir na black friday do seu Florestan.
---------------------------------------------------------------------

*/

#include <stdio.h>
#include <stdlib.h>

// Funções para ordenação.
void mergeSort(long long int *, int, int);

void intercala(long long int *, int, int, int);

// Função principal.
int main()
{
    char entrada[10];

    scanf("%s", entrada);
    FILE *arq = fopen(entrada, "r");
    if (arq == NULL)
    {
        printf("Nao foi possivel abrir o arquivo");
    }
    else
    {
        int totalItens, aux;
        long int totalDesconto = 0;
        long long int *listaPrecos;

        // Recebimento do total de itens para a compra.
        fscanf(arq, "%d", &totalItens);

        listaPrecos = malloc(totalItens * sizeof(long long int));

        // Preenchimento da lista de preços.
        for (aux = 0; aux < totalItens; aux++)
            fscanf(arq, "%lld", &listaPrecos[aux]);

        // Ordenação do vetor.
        mergeSort(listaPrecos, 0, totalItens);

        // Pegar apenas os valores que estão na posição múltipla de três,
        // pois são os valores que sairão de graça.
        for (aux = 2; aux < totalItens; aux += 3)
            totalDesconto += listaPrecos[aux];

        printf("%ld", totalDesconto);
        free(listaPrecos);
    }
    fclose(arq);
}

// Funções de ordenação.
void mergeSort(long long int *v, int inic, int fim)
{
    int meio = (fim + inic) / 2;
    if (inic < fim - 1)
    {
        mergeSort(v, inic, meio);
        mergeSort(v, meio, fim);
        intercala(v, inic, meio, fim);
    }
}

void intercala(long long int *v, int inic, int meio, int fim)
{
    // Vetor para auxiliar a ordenação.
    int *w = (int *)malloc((fim - inic) * sizeof(int));

    // "i" varrerá do início até o meio, e "j" do meio até o fim, aux será o auxiliar
    // para ajeitar os valores no vetor "w".
    int i = inic, j = meio, aux = 0;

    while (i < meio && j < fim)
    {
        if (v[i] > v[j])
            w[aux++] = v[i++];
        else
            w[aux++] = v[j++];
    }

    // Se o "j" já atingiu o fim, mas o "i" não varreu todo o seu espaço, percorra copiando.
    while (i < meio)
        w[aux++] = v[i++];

    // Se o "i" já atingiu o fim, mas o "j" não varreu todo o seu espaço, percorra copiando.
    while (j < fim)
        w[aux++] = v[j++];

    // Muda o vetor original, baseado no vetor auxiliar.
    for (aux = 0; aux < (fim - inic); aux++)
        v[inic + aux] = w[aux];
    free(w);
}
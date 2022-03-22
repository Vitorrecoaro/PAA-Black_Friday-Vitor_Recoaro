"""

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

"""

# Abre o arquivo da instância.
file = open(input(), "r")

# Recebimento dos valores nas linhas do arquivo.
linhas = file.readlines()
numItens = int(linhas[0])
listaPrecos = list(map(int, linhas[1].split()))

# Para que tenha o maior desconto, é necessário escolher os 3 itens mais caros,
# pois os produtos mais caros cobrem o valor do produto mais barato. Assim,
# ordenando a lista de preços de modo decrescente e escolhendo de 3 em 3 para receber
# os descontos.

listaPrecos.sort(reverse=True)

# Criação de uma lista com todos os valores que receberão desconto.
listaPrecoDesconto = listaPrecos[2::3]

# Soma de todos os preços que tem desconto
descTotal = sum(listaPrecoDesconto)

print(descTotal)

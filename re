aula 10/10/26
idade = 30 # guarda em idade
print (idade)#mostra:30
numeros =[10,20,30,40,50]
print(numeros)
# 1)criar a lista base da aula 
numeros = [10, 20, 30, 40, 50]
print(numeros) # [10, 20, 30, 40, 50]
print(len(numeros)) # 5
numeros = [10, 20, 30, 40, 50]
valor = numeros[2] # lê o índice 2
print(valor) # 30
numeros[3] = 45 # escreve no índice 3
print(numeros) # [10, 20, 30, 45, 50]
# numeros[5] daria IndexError (só vai até 4)
numeros = [10, 20, 30, 40, 50]
valor = (numeros[2]) # le o indice 2 
print(numeros)
# saída: 0 10 | 1 20 | 2 30 | 3 40 | 4 50
numeros = [10, 20, 30, 40, 50]
print(numeros[3]) # 40, direto
for i in range(len(numeros)):
 print(i, numeros[i])
 # saída: 0 10 | 1 20 | 2 30 | 3 40 | 4 50
numeros = [10, 20, 30, 40, 50]
valor = 30 # procurado
posicao = -1 # se não achar continua
for i in range(len(numeros)): # Laço de
 if numeros[i] == valor: # Se de comparação.
  posicao = i # Aquela posição irá receber
  break # 6) para
print(posicao) # 7) saída com impressão na tela
numeros = [10, 20, 30, 40, 50]
valor = 30 # procurado
posicao = -1 # se não achar continua
for i in range(len(numeros)): # Laço de
 if numeros[i] == valor: # Se de comparação.
  posicao = i # Aquela posição irá receber
  print('lindo') # 7) saída com impressão na tela
  break # 6) para
numeros = [10, 20, 30, 40, 50]
valor = 25
posicao = 2
tamanho = len(numeros) # 5
numeros.append(0) # Inserindo uma "vaga" no
for i in range(tamanho, posicao, -1): #
 numeros[i] = numeros[i - 1] # copia os valores
 numeros[posicao] = valor # insere o dado inserido
print(numeros) # Impressão na tela
notas = [7, 8, 9, 10, 6]

for nota in notas:
    print(nota)
valores = [10, 20, 30, 40, 50, 60]

print("Primeiro elemento:", valores[0])
print("Último elemento:", valores[-1])  # O índice -1 pega sempre o último item da lista.
precos = [10, 20, 30]
soma = 0

for preco in precos:
    soma += preco

media = soma / 3

print("Soma:", soma)
print("Média:", media)
precos = [10, 20, 30]
soma = 0

for preco in precos:
    soma += preco

media = soma / 3

print("Soma:", soma)
print("Média:", media)
idades = [15, 42, 23, 8, 31]

maior = idades[0]
menor = idades[0]

for idade in idades:
    if idade > maior:
    if idade > maior:
        maior = idade
    if idade < menor:
        menor = idade

print("Menor valor:", menor)
print("Maior valor:", maior)
itens = [100, 200, 300, 400]

# --- Buscando o valor 300 ---
busca = 300
resultado = -1

for i in range(len(itens)):
    if itens[i] == busca:
        resultado = i
        break

print(f"Buscando {busca} -> Índice:", resultado)


# --- Buscando o valor 500 (não existe na lista) ---
busca_inexistente = 500
resultado_inexistente = -1

for i in range(len(itens)):
    if itens[i] == busca_inexistente:
        resultado_inexistente = i
        break

print(f"Buscando {busca_inexistente} -> Índice:", resultado_inexistente)

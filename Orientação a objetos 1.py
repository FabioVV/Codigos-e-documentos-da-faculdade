# INSIRA ABAIXO OS NOMES DOS ALUNOS DO GRUPO (máximo 6 alunos)
# ALUNO 1: Fábio Gabriel Rodrigues Varela
# ALUNO 2: Jhoselin Tito Pari


'''
Escreva uma função com o nome 'pertence', que recebe como argumentos de
entrada uma lista e dois itens e retorna 1, se os dois itens estiverem
armazenados na lista, e 0 caso contrário.
'''


def pertence(lista, item1, item2):
    if item1 and item2 in lista:
        return 1
    else:
        return 0


listo = [2, 3, 4, 8, 0]
resultado = pertence(listo, 3, 0)
print(resultado)

listo = [2, 3, 4, 8, 0]
resultado = pertence(listo, 3, 9)
print(resultado)

'''
Escreva uma função chamada 'substituir' que recebe como argumentos de entrada
uma lista e dois itens (velho e novo) e retorna uma lista onde todas as
ocorrências do item velho são substituídas pelo item novo.
'''


def substituir(lista, velho, novo):
    listanova = lista.copy()

    for x in range(len(lista)):
        if listanova[x] == velho:
            listanova[x] = novo

    return listanova


listi = [1, 2, 3, 2, 4, 2, 2, 22, 1]
resultado = substituir(listi, 2, 99)
print(resultado)

'''
Escreva uma função chamada 'posicoes' que recebe como argumentos de entrada
uma tupla e um item, e retorna uma lista contendo todos os índices em que o
item aparece na tupla.
Caso o item nao exista na tupla, deve retornar uma lista vazia.
.
'''


def posicoes(tupla, item):
    lista = []

    for x in range(len(tupla)):
        if item not in tupla:
            return []
        elif tupla[x] == item:
            lista.append(x)

    return lista


tupla = (2, 1, 2, 3, 2, 2, 9, 2)
resultado = posicoes(tupla, 2)
print(resultado)

tupla = (2, 1, 2, 3, 2, 2, 9, 2)
resultado = posicoes(tupla, 5)
print(resultado)

'''
Considere um dicionario onde a chave é o nome de um aluno e o valor uma lista
de notas. Escreva uma função chamada 'aprovados' que recebe como argumentos
de entrada o dicionário e retorna uma lista com o nome dos alunos aprovados.
Caso nenhum aluno seja reprovado, deve retornar uma lista vazia. Considere
que o aluno é aprovado se a média das suas notas é superior ou igual a 6.
'''


def aprovados(alunos):
    lista = []
    repro = []
    for x, y in alunos.items():

        if sum(y) / len(y) >= 6.00:
            lista.append(x)
        else:
            repro.append(x)
    if len(repro) == 0:
        return []
    else:
        return lista


alunos = {'Augusto': [4.5, 7.0, 6.0, 3.0],
          'Denise': [9.0, 8.5],
          'Ana Paula': [3.5, 1.0, 6.5],
          'Marcelo': [9.0, 10.0, 7.0, 7.0]}
resultado = aprovados(alunos)
print(resultado)

'''
Considere um dicionário onde a chave é o nome de um aluno e o valor uma lista
de notas. Escreva uma função chamada 'maior_nota' que recebe como argumentos
de entrada o dicionário e retorna outro dicionário com o nome e a maior
nota de cada aluno.
'''


def maior_nota(alunos):
    m = {nome: max(valor) for nome, valor in alunos.items()}
    novo_dic = {}
    novo_dic.update(m)
    return novo_dic


alunoss = {'Augusto': [4.5, 7.0, 6.0, 3.0],
           'Denise': [9.0, 8.5],
           'Ana Paula': [3.5, 1.0, 6.5],
           'Marcelo': [9.0, 10.0, 7.0, 7.0]}
resultado = maior_nota(alunoss)
print(resultado)

"""""
AC 5 

Fábio Gabriel Rodrigues Varela
2201860

Kayki Molina 
2201424

Jhoselin Tito Pari 
2100866

Sara Silva Nascimento
2200171   


"""""

list_aprovados = []
list_reprovados = []
menores_notas_remocao = 0
with open('notas.txt', 'r', encoding='UTF-8') as f:
    for linha in f:
        alunos_dados = linha.split(';')
        if int(alunos_dados[9]) > 20:
            list_reprovados.append(alunos_dados)
        else:
            notas = [alunos_dados[2], alunos_dados[3], alunos_dados[4], alunos_dados[5],
                     alunos_dados[6]]
            notas.sort()

            for x in range(5):
                if x == 0:
                    menores_notas_remocao = notas[x]
                    maior = notas[x]
                else:
                    if notas[x] < menores_notas_remocao:
                        menores_notas_remocao = notas[x]
            notas.remove(menores_notas_remocao)

            media_notas = 0
            for c in range(len(notas)):
                media_notas = media_notas + float(notas[c])
            media_notas = media_notas / 4
            if alunos_dados[7] > alunos_dados[8]:
                media_final_aluno = (media_notas + float(alunos_dados[7])) / 2
                if media_final_aluno >= 6:
                    list_aprovados.append(alunos_dados)
                else:
                    list_reprovados.append(alunos_dados)
            else:
                media_final_aluno = (media_notas + float(alunos_dados[8])) / 2
                if media_final_aluno >= 6:
                    list_aprovados.append(alunos_dados)
                else:
                    list_reprovados.append(alunos_dados)
    with open('aprovados.txt', 'w', encoding='UTF-8') as a:

        apro = []
        for x in list_aprovados:
            apro.append(x[1])
        apro.sort()
        for x in apro:
            a.write(str(x) + '\n')

    with open('reprovados.txt', 'w', encoding='UTF-8') as r:

        repro = []
        for x in list_reprovados:
            repro.append(x[1])
        repro.sort()
        for x in repro:
            r.write(str(x) + '\n')

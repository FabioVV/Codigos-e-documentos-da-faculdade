# INSIRA ABAIXO OS NOMES DOS ALUNOS DO GRUPO (máximo 6 alunos)
# ALUNO 1: Jhoselin Tito Pari
# ALUNO 2: Fábio Gabriel Rodrigues Varela
# ALUNO 3:
# ALUNO 4:
# ALUNO 5:
# ALUNO 6:


class Endereco:
    def __init__(self, rua: str, numero: str, complemento: str, bairro: str, cidade: str, uf: str, cep: str):
        self.rua = rua
        self.numero = numero
        self.complemento = complemento
        self.bairro = bairro
        self.cidade = cidade
        self.uf = uf
        self.cep = cep


class Cliente:
    def __init__(self, nome: str, telefone: str, endereco: Endereco):
        self.nome = nome
        self.telefone = telefone
        self.endereco = endereco


class Pedido:
    def __init__(self, cliente: Cliente, altura: float, largura: float, frase: str, cor_placa: str, cor_letra: str):
        self.cliente = cliente
        self.altura = altura
        self.largura = largura
        self.frase = frase
        self.cor_placa = cor_placa
        self.cor_letra = cor_letra
        self.valor_fixo_material = 172.00
        self.valor_fixo_letra = 0.55

    def calcular_total(self):
        area = 0
        custo_material = 0
        custo_desenho = 0
        total = 0

        area = self.altura * self.largura
        custo_material = area * self.valor_fixo_material
        custo_desenho = len(self.frase.replace(" ", "")) * self.valor_fixo_letra
        total = custo_desenho + custo_material
        return total


class Historico:
    def __init__(self):
        self.pedidos = []

    def inserir_pedido(self, pedido):
        self.pedidos.append(pedido)

    def calcular_faturamento(self):
        total = 0
        for ped in self.pedidos:
            total += ped.calcular_total()
        return total




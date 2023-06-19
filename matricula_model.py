from flask import jsonify

from sqlalchemy.sql import text

import aluno_model
import disciplina_model
import conexao_bd

engine = conexao_bd.getConexao() 


#criar a tabela Matricula
def criarTabelaMatricula():
    with engine.connect() as con:    
        create_tabela_matricula = """
        CREATE TABLE IF NOT EXISTS Matricula (
            id_aluno INTEGER,
            id_disciplina INTEGER,
            PRIMARY KEY (id_aluno, id_disciplina),
            FOREIGN KEY (id_aluno) REFERENCES Aluno (id),
            FOREIGN KEY (id_disciplina) REFERENCES Disciplina (id)
            )
        """    
        con.execute(create_tabela_matricula);

'''
1)Crie uma funÃ§Ã£o que recebe dois parÃ£metros id_aluno e
    id_disciplina e verifica na tabela Matricula se existe
    esse registro. Se nÃ£o existir retorna None e se existir, retorna
    a dict(matricula). Essa funÃ§Ã£o serÃ¡ chamada nas funÃ§Ãµes: matricular e
    excluirMatricula
'''     
def getMatriculaIdAlunoIdDisciplina(id_aluno, id_disciplina):
    with engine.connect() as con:  
        statement = text ("""SELECT id_aluno, id_disciplina FROM Matricula where id_aluno = :id_aluno and id_disciplina = :id_disciplina""") 
        
        rs = con.execute(statement, id_aluno = id_aluno, id_disciplina = id_disciplina) 
        resu = rs.fetchall()                 

        if resu == []:                       
            return None
        
        result = [dict(matricula) for matricula in resu]
        return jsonify(result) 


'''
2)Crie uma funÃ§Ã£o que recebe um dicionÃ¡rio 'matricula' com as chaves id_aluno
    e id_disciplina para salvar na tabela Matricula.
    Se o aluno nÃ£o existir cadastrado, retorna False
    Se a disciplina nÃ£o existir cadastrada, retorna False
    Caso ambos existem, entÃ£o devemos verificar na Tabela de Matriculas
    se o id_aluno e id_matricula jÃ¡ existem na tabela, pois nÃ£o pode
    existir o mesmo aluno para a mesma disciplina. Nesse caso deve retornar None
    Se nÃ£o existir, entÃ£o deve salvar na tabela Matricula e retorna True
'''   
def matricular(matricula):
    #verificar se o aluno existe
    #verificar se a disciplina existe
    #verificar se jÃ¡ existe a matrÃ­cula do aluno para a disciplina, 
    #nÃ£o pode ter mais de uma
    alu = matricula['id_aluno']
    disci = matricula['id_disciplina']

    disciplina_model.getDisciplinaId(disci)
    aluno_model.getAlunoId(alu)

    if not disciplina_model.getDisciplinaId(disci) or not aluno_model.getAlunoId(alu):
        return False
    
    if getMatriculaIdAlunoIdDisciplina(alu, disci):
        return None
    else:
        with engine.connect() as con:
           
           sql_criar = "INSERT INTO Matricula (id_aluno, id_disciplina) VALUES (:id_aluno, :id_disciplina)"
           con.execute(sql_criar, id_aluno = alu, id_disciplina = disci)
           return True
        
        

'''
3)Crie uma funÃ§Ã£o que recebe o parÃ¢metro id_aluno, verifica se esse
    aluno existe na tabela Aluno (aluno_model.xxxxxxx). Se retornar None,
    retorna entÃ£o False. Caso contrÃ¡rio, faÃ§a a consulta que retorna todas
    as matrÃ­culas do aluno id_aluno
'''                       	
def getMatriculasIdAluno(id_aluno):
    #verificar se o aluno existe
    if not aluno_model.getAlunoId(id_aluno):
        return False
    else:
        with engine.connect() as con:  
            statement = text (""" 
            
                SELECT Disciplina.nome from Disciplina 
                JOIN Matricula ON Disciplina.id = Matricula.id_disciplina
                WHERE Matricula.id_aluno = :id_aluno            
            """) 
                 # SELECT Disciplina.nome from Disciplina 
                # JOIN Matricula ON Disciplina.id = Matricula.id_disciplina
                # JOIN Aluno ON Matricula.id_aluno = Aluno.id
                # WHERE Matricula.id_aluno = :id_aluno
            rs = con.execute(statement, id_aluno = id_aluno) 
            resu = rs.fetchall()                 
            result = [dict(matricula) for matricula in resu]
            return jsonify(result) 



'''
4)Crie uma funÃ§Ã£o que recebe o parÃ¢metro id_disciplina, verifica se essa
    disciplina existe na tabela Disciplina (disciplina_model.xxxxxxx). Se retornar None,
    retorna entÃ£o False. Caso contrÃ¡rio, faÃ§a a consulta que retorna todas
    as matrÃ­culas da disciplina id_disciplina
'''   
def getMatriculasIdDisciplina(id_disciplina):
    #verificar se a disciplina existe
    #verificar se o aluno existe
    if not disciplina_model.getDisciplinaId(id_disciplina):
        return False
    else:
        with engine.connect() as con:  
            statement = text (""" 
            
                SELECT Matricula.id_aluno from Matricula 
                JOIN Disciplina ON Matricula.id_disciplina = Disciplina.id
                WHERE Matricula.id_disciplina = :id_disciplina            
            """) 
                 # SELECT Disciplina.nome from Disciplina 
                # JOIN Matricula ON Disciplina.id = Matricula.id_disciplina
                # JOIN Aluno ON Matricula.id_aluno = Aluno.id
                # WHERE Matricula.id_aluno = :id_aluno
            rs = con.execute(statement, id_disciplina = id_disciplina) 
            resu = rs.fetchall()                 
            result = [dict(matricula) for matricula in resu]
            return jsonify(result)  
                                                 


'''
5)Crie uma funÃ§Ã£o que recebe dois paramÃªtros: id_aluno e id_disciplina.
    Verifica se esse aluno existe na tabela Aluno (aluno_model.xxxxxxx). 
    Se retornar None entÃ£o retorne False.    
    Verifica se essa disciplina existe na tabela Disciplina (disciplina_model.xxxxxxx). 
    Se retornar None entÃ£o retorne False.
    Caso ambos existem, entÃ£o devemos verificar na Tabela de Matriculas
    se o id_aluno e id_matricula jÃ¡ existem na tabela, pois nÃ£o podemos excluir uma 
    matrÃ­cula que nÃ£o que exista. Nesse caso, se nÃ£o existir, retorna None
    Caso contrÃ¡rio, exclua da tabela Matricula o registro que tenha os valores
    informados no parÃ¢metro e retorna True
'''   
def excluirMatricula(id_aluno, id_disciplina):
    #verificar se o aluno e a disciplina existem
    #verificar se a disciplina existe
    #verificar se jÃ¡ existe a matrÃ­cula do aluno para a disciplina, 
    #nÃ£o pode ter mais de uma

    disciplina_model.getDisciplinaId(id_disciplina)
    aluno_model.getAlunoId(id_aluno)

    if not disciplina_model.getDisciplinaId(id_disciplina) or not aluno_model.getAlunoId(id_aluno):
        return False
    
    if getMatriculaIdAlunoIdDisciplina(id_aluno, id_disciplina):
        return None
    else:
        with engine.connect() as con:
           
           sql_criar = "DELETE id_aluno, id_disciplina FROM Matricula WHERE id_aluno = :id_aluno and id_disciplina = :id_disciplina"
           con.execute(sql_criar, id_aluno = id_aluno, id_disciplina = id_disciplina)
           return True

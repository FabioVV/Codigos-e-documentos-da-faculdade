#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");

//Informações
	string nome;
	float idade;
	int sexo;
	float nota;
	int total_alunos = 0;
//Faixa Etaria
	float faixa_etaria;
	float cont_faixa_etaria;
//Media boys and girls e qual tem a maior media
    float media_h = 0;
    float media_f = 0;
    float cont_h = 0;
    float cont_f = 0;
//Aluno mais novo
    float mais_novo_idade = 200;
    string mais_novo_nome;
//Aluno mais velho
    float mais_velho_idade = 0;
    string mais_velho_nome;
//Melhor aluno
    float nota_melhor_aluno = 0;
    string nome_melhor_aluno;
    int sex_melhor_aluno = 0;
//Pior aluno
    float nota_pior_aluno = 200;
    string nome_pior_aluno;
    int sex_pior_aluno = 0;
    
    
	
	cout<<"Se deseja encerrar a aplicação digite 'FIM'."<<endl;
	cout<<""<<endl;
	
	cout<<"Digite o nome do aluno: ";
	cin >> nome;
	
	while(nome != "FIM" && nome != "fim" && total_alunos != 50){
		
		cont_faixa_etaria++;
		total_alunos++;
		
		cout<<"Digite o sexo do aluno (1 - Feminino, 2 - Masculino): ";
		cin >> sexo;
		cout<<"Digite a idade do aluno: ";
		cin >> idade;
		cout<<"Digite a nota do aluno: ";
		cin >> nota;
		
		faixa_etaria += idade;
		
		if(nome == "Dalessandro"){
			cout<<"Te achei, Dalessandro!!"<<endl;
		}
		
		if(sexo == 1){
			media_f += nota; 
			cont_f++;
		} else if(sexo == 2){
			media_h += nota;
			cont_h++;
		}
		
		if(idade > mais_velho_idade){
			mais_velho_idade = idade;
			mais_velho_nome = nome;
		}
		
		if(idade < mais_novo_idade){
			mais_novo_idade = idade;
			mais_novo_nome = nome;
		}
		
		if(nota > nota_melhor_aluno){
			nota_melhor_aluno = nota;
			nome_melhor_aluno = nome;
			sex_melhor_aluno = sexo;
		}
		
		if(nota < nota_pior_aluno){
			nota_pior_aluno = nota;
			nome_pior_aluno = nome;
			sex_pior_aluno = sexo;
		}
		
		if(total_alunos == 50){
			cout<<"Total de alunos alcançado!!"<<endl;
		}
		
		cout<<""<<endl;
		
		cout<<"Digite o nome do aluno: ";
	    cin >> nome;
	}

    faixa_etaria /= cont_faixa_etaria;
    media_f /=cont_f;
    media_h /=cont_h;

    cout<<""<<endl;
    cout<<"========Fábio Schoolzz========"<<endl;
    cout<<"Faixa etária da turma: "<<faixa_etaria<<endl;
	cout<<"Média de notas homens: "<<media_h<<endl;
	cout<<"Média de notas mulheres: "<<media_f<<endl;
	if(media_f > media_h){cout<<"As mulheres da turma contém a melhor média: "<<media_f<<endl;}
	else if (media_h > media_f){cout<<"Os Homems da turma contém a melhor média: "<<media_h<<endl;} 
	cout<<"Nome do aluno mais novo: "<<mais_novo_nome<<endl;
	cout<<"Idade do aluno mais novo: "<<mais_novo_idade<<endl;
	cout<<"Nome do aluno mais velho: "<<mais_velho_nome<<endl;
	cout<<"Idade do aluno mais velho: "<<mais_velho_idade<<endl;
	cout<<"O nome do melhor aluno(a) da sala: "<<nome_melhor_aluno<<endl;
	cout<<"A nota do melhor aluno(a) da sala: "<<nota_melhor_aluno<<endl;
	cout<<"O sexo do melhor aluno(a) da sala: "<<sex_melhor_aluno<<" <-----(Se for 1 é Feminino e se for 2 é - Masculino.)"<<endl; 
    cout<<""<<endl;
	cout<<"O nome do pior aluno(a) da sala: "<<nome_pior_aluno<<endl;
	cout<<"A nota do pior aluno(a) da sala: "<<nota_pior_aluno<<endl;
	cout<<"O sexo do pior aluno(a) da sala: "<<sex_pior_aluno<<" <-----(Se for 1 é Feminino e se for 2 é - Masculino.)"<<endl; 
	cout<<"=============================="<<endl;
	cout<<""<<endl;
	system("pause");
}

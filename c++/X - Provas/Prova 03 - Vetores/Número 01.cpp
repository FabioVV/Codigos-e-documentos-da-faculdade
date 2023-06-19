#include <iostream>
#include  <stdlib.h>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	//vetor crescente
	int aux;
	
	//Mulheres da turma
	string Feminino[40];
	
	//Media altura
	float media_altura = 0;
	
	//Consulta aluno
	string testes;
	string nome_cos;
	
	//alunos com notas abaixo de 7 e altura abaixo de 1.60
	string nomes_7[40];
	
	//notas entre 4 e 6
	int cont46 = 0;
	
	//Melhor e pior aluno
	string nome_pior;
	int sexo_pior;
	float nota_pior;
	float altura_pior;
	
	string nome_melhor;
	int sexo_melhor;
	float nota_melhor;
	float altura_melhor;
	
	//Alunos com media maior que a turma
	float media_turma = 0;
	string nome_media_turma[40];
	int sexo_media_turma[40];
	float notas_media[40];
	
	
	//vetores
	string nomes[40];
	float notas[40];
	int sexos[40];
	float alturas[40];
	
	//reguladores while
	int pos = 0;
	int cont = 0;
	
	cout<<""<<endl;
	cout<<"Se deseja finalizar a aplicação digite FIM."<<endl;
	cout<<""<<endl;
	
	cout<<"Digite o nome do aluno: ";
	cin >> nomes[pos];
	
	while(nomes[pos] != "FIM" || cont == 40){
		cout<<"Digite a nota do aluno: ";
		cin >> notas[pos];
		cout<<"Digite o sexo do aluno (1 - Feminino, 2 - Masculino): ";
		cin >> sexos[pos];
		cout<<"Digite a altura do aluno: ";
		cin >> alturas[pos];
		pos++;
		cont++;
		
		
		cout<<""<<endl;
		cout<<"Digite o nome do aluno: ";
		cin >> nomes[pos];	
	}
	
	system("CLS");
	
		
	cout<<""<<endl;
	cout<<"Lista de alunos: "<<endl;
	cout<<""<<endl;
	cout<<"Nomes: "<<endl;
	for(int i = 0; i < pos; i++){
		cout<<nomes[i]<<endl;
	}
	cout<<""<<endl;
	cout<<"Notas: "<<endl;
	for(int i = 0; i < pos; i++){
		cout<<notas[i]<<endl;
	}
	cout<<""<<endl;
	cout<<"Sexos: "<<endl;
	for(int i = 0; i < pos; i++){
		cout<<sexos[i]<<endl;
	}
	cout<<""<<endl;
	cout<<"Alturas: "<<endl;
	for(int i = 0; i < pos; i++){
		cout<<alturas[i]<<endl;
	}
	cout<<""<<endl;
	
	for(int i = 0; i < pos; i++){
		media_turma +=notas[i];
	}
	media_turma /= pos;
	
	for(int i = 0; i < pos; i++){
		media_altura +=alturas[i];
	}
	media_altura /= pos;
	
	
	
	for(int i = 0; i < pos; i++){
		if(notas[i] > media_turma){
			nome_media_turma[i] = nomes[i];
			sexo_media_turma[i] = sexos[i];
			notas_media[i] = notas[i];
		}
	}
	
	
	
	for(int i = 0; i < pos; i++){
		if(notas[i] < media_turma){
			nome_pior = nomes[i];
			sexo_pior = sexos[i];
			nota_pior = notas[i];
			altura_pior = alturas[i];
		}
	}
	
	for(int i = 0; i < pos; i++){
		if(notas[i] > media_turma){
			nome_melhor = nomes[i];
			sexo_melhor = sexos[i];
			nota_melhor = notas[i];
			altura_melhor = alturas[i];
		}
	}
	
	for(int i = 0; i < pos; i++){
		if(notas[i] >= 4 && notas[i] <= 6){
			cont46++;
		}
	}
	
	for(int i = 0; i < pos; i++){
		if(notas[i] < 7 && alturas[i] <= 1.60){
			nomes_7[i] = nomes[i];
		}
	}
	
	for(int i = 0; i < pos; i++){
		if(sexos[i] == 1){
			Feminino[i] = nomes[i];
		}		
	}
	
	for(int i = 0; i < pos; i++){
		if(cont > 5 && cont >=10){
			if(alturas[10] > media_altura){
				cout<<""<<endl;
				cout<<"O décima aluno contém uma altura maior que a média de altura da turma."<<endl;
				cout<<""<<endl;
			}
		}
	}
	
	
	cout<<"Alunos com nota acima da média:"<<endl;
	cout<<"(1 - Aluno do sexo Feminino, 2 - Aluno do sexo Masculino)"<<endl;
	cout<<"Desconsiderar sexos com valor 0 ou números sem nexo algum."<<endl;
	cout<<""<<endl;
	for(int i = 0; i < pos; i++){
		cout<<nome_media_turma[i]<<endl;
		cout<<"Sexo: "<<sexo_media_turma[i]<<endl;
	}
	
	cout<<""<<endl;
	cout<<"Mulheres da turma: "<<endl;
	for(int i = 0; i < pos; i++){
		cout<<Feminino[i]<<endl;
	}
	cout<<""<<endl;
	
	
	cout<<""<<endl;
	cout<<"Melhor aluno(a): "<<endl;
	cout<<"Nome: "<<nome_melhor<<endl;
	cout<<"Sexo: "<<sexo_melhor<<endl;
	cout<<"Nota: "<<nota_melhor<<endl;
	cout<<"Altura: "<<altura_melhor<<endl;
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Pior aluno(a): "<<endl;
	cout<<"Nome: "<<nome_pior<<endl;
	cout<<"Sexo: "<<sexo_pior<<endl;
	cout<<"Nota: "<<nota_pior<<endl;
	cout<<"Altura: "<<altura_pior<<endl;
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Total de alunos com nota entre 4 e 6: "<<cont46<<endl;
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Alunos com nota menor que 7 e altura menor que 1.60: "<<cont46<<endl;
	for(int i = 0; i < pos; i++){
		cout<<nomes_7[i]<<endl;
	}
	
	
	for(int i = 0; i < pos; i++){
		for(int j = i + 1; j < pos; j++){
			if(notas[i] > notas[j]){
				aux = notas[i];
				notas[i] = notas[j];
				notas[j] = aux;
			}
		}
	}
	cout<<"Notas dos alunos em forma crescente: "<<endl;
	for(int i = 0; i < pos; i++){
		cout<<notas[i]<<endl;
	}
	
	
	
	cout<<""<<endl;
	cout<<"Acima temos o resto das informações...... "<<endl;
	cout<<"Nomes dos alunos para consulta: "<<endl;
	for(int i = 0; i < pos; i++){
		cout<<nomes[i]<<endl;
	}
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Deseja consultar algum aluno? (s/n):"<<endl;
	cin >> testes;
	if(testes == "s"){
		cout<<"Digite o nome do aluno: ";
		cin >> nome_cos;
		cout<<""<<endl;
		for(int i = 0; i < pos; i++){
			if(nomes[i] == nome_cos){
			cout<<"Aluno encontrado nesta posição...."<<endl;
			cout<<"Dados do aluno: "<<endl;
			cout<<"Nome: "<<nomes[i]<<endl;
			cout<<"Sexo (1 - Feminino, 2 - Masculino): "<<sexos[i]<<endl;
			cout<<"Altura: "<<alturas[i]<<endl;
			cout<<"Nota: "<<notas[i]<<endl;
			} else {
				cout<<""<<endl;
				cout<<"Aluno não encontrado nesta posição...."<<endl;
				cout<<""<<endl;
			}
	    }
	} else {
		cout<<"Pesquisa encerrada."<<endl;
	}
	
	cout<<""<<endl;
	system("pause");
}

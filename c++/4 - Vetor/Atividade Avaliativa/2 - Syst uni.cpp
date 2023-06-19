#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nomes[200];
	int idades[200];
	int sexos[200];
	float notas[200];
	
	float faixa_etaria = 0;
	float media_masc = 0;
	float media_fem = 0;
	
	int pos = 0;
	
	int aluno_velho = 0;
	string nome_aluno_velho;
	float nota_aluno_velho = 0;
	int sexo_aluno_velho = 0;
	
	int aluno_novo = 130;
	string nome_aluno_novo;
	float nota_aluno_novo = 0;
	int sexo_aluno_novo = 0;
	
	float melhor_nota = 0;
	string aluno_melhor;
	int sexo_aluno_melhor = 0;
	
	cout<<"Digite o nome do aluno(a): ";
	cin >> nomes[pos];
	
	while(nomes[pos] != "fim"){
		
		cout<<"Digite a idade do aluno(a): ";
		cin >> idades[pos];
		cout<<"(1 - Feminino, 2 - Masculino) ";
		cout<<"Digite o sexo do aluno(a): ";
		cin >> sexos[pos];
		cout<<"Digite a nota do aluno(a): ";
		cin >> notas[pos];
		
		pos++;
		
		
		cout<<""<<endl;
		cout<<"Digite o nome do aluno(a): ";
		cin >> nomes[pos];
	}
	
	for(int i = 0; i < pos; i++){
		faixa_etaria += idades[i];
	}
	faixa_etaria /= pos;
	
	
	for(int x = 0; x < pos; x++){
		if(sexos[x] == 1){
			media_fem += notas[x];
		}
	}
	for(int k = 0; k < pos; k++){
		if(sexos[k] == 1){
			media_masc += notas[k];
		}
	}
	
	media_fem /= pos;
	media_masc /= pos;
	
	
	
	for(int f = 0; f < pos; f++){
		if(idades[f] > aluno_velho){
			aluno_velho = idades[f];
			nome_aluno_velho = nomes[f];
			nota_aluno_velho = notas[f];
			sexo_aluno_velho = sexos[f];
		}
	}
	for(int o = 0; o < pos; o++){
		if(idades[o] < aluno_novo){
			aluno_novo = idades[o];
			nome_aluno_novo = nomes[o];
			nota_aluno_novo = notas[o];
			sexo_aluno_novo= sexos[o];
		}
	}
	
	
	for(int z = 0; z < pos; z++){
		if(notas[z] > melhor_nota){
			aluno_melhor = nomes[z];
			melhor_nota = notas[z];
			sexo_aluno_melhor = sexos[z];
		}
	}
	
	
	for(int a = 0; a < pos; a++){
		if(nomes[a] == "Zé"){
			cout<<""<<endl;
			cout<<"Fala zé!"<<endl;
			cout<<""<<endl;
		}
		
	}
	
	cout<<""<<endl;
	cout<<"Faixa etária da turma:"<<faixa_etaria<<endl;
	if(media_fem > media_masc){cout<<"As mulheres detém a melhor média de notas.";} 
	else if(media_masc > media_fem){cout<<"Os homens detém a melhor média de notas.";}
	
	cout<<""<<endl;
	cout<<"Aluno mais velho: "<<endl;
	cout<<"Nome: "<<nome_aluno_velho<<endl;
	cout<<"Nota: "<<nota_aluno_velho<<endl;
	cout<<"Sexo: "<<sexo_aluno_velho<<endl;
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Aluno mais novo:"<<endl;
	cout<<"Nome: "<<nome_aluno_novo<<endl;
	cout<<"Nota: "<<nota_aluno_novo<<endl;
	cout<<"Sexo: "<<sexo_aluno_novo<<endl;
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Melhor aluno(a): "<<endl;
	cout<<"Nome: "<<aluno_melhor<<endl;
	cout<<"Nota: "<<melhor_nota<<endl;
	cout<<"Sexo: "<<sexo_aluno_melhor<<endl;
	cout<<""<<endl;
	
	system("pause");
}

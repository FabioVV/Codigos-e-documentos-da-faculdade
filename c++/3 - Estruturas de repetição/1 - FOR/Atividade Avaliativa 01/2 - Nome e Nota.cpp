#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	float nota = 0;
	float media = 0;
	int i = 0;

	//Aluno nota zero
	string alunozero;
	int totalzero;
	
	for(i; i < 20; i++){
		cout<<"Digite o nome do aluno número "<<i+1<<"º: ";
		cin >> nome;
		
		cout<<"Digite a nota do aluno número "<<i+1<<"º: ";
		cin >> nota;
		
		cout<<""<<endl;
		
		if(nota > 0){
			media += nota;
		} else if(nota == 0){
			alunozero = nome;
			totalzero++;
		} else {
			cout<<"Nota inválida!!!";
		}
		
	}
	
	media /= i;
	
	cout<<"Média da turma: "<<media<<endl;
	cout<<""<<endl;
	
	
	cout<<"--------Alunos com nota zero--------"<<endl;
	if(totalzero > 0){
		cout<<"Total de alunos com zero nas suas notas: "<<totalzero<<endl;
	    cout<<"Nome do aluno: "<<alunozero<<endl;
	    cout<<""<<endl;
	    
	    
	} else if(totalzero <= 0){
		cout<<"Sem alunos com zero nas suas notas."<<endl;
		cout<<""<<endl;
	}
	
	
	
	system("pause");
}

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
		cout<<"Digite o nome do aluno n�mero "<<i+1<<"�: ";
		cin >> nome;
		
		cout<<"Digite a nota do aluno n�mero "<<i+1<<"�: ";
		cin >> nota;
		
		cout<<""<<endl;
		
		if(nota > 0){
			media += nota;
		} else if(nota == 0){
			alunozero = nome;
			totalzero++;
		} else {
			cout<<"Nota inv�lida!!!";
		}
		
	}
	
	media /= i;
	
	cout<<"M�dia da turma: "<<media<<endl;
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

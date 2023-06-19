#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int nota;
	string conceito;
	
	cout<<"Digite a nota do aluno(0 a 100): ";
	cin>>nota;
	
	
	if(nota > 0 && nota <= 39){
		conceito = "E";
		
	} else if(nota > 40 && nota <= 59){
		conceito = "D";
		
	} else if(nota > 60 && nota <= 75){
		conceito = "C";
		
	} else if(nota > 76 && nota <= 89){
		conceito = "B";
		
	} else if(nota > 90 && nota <= 100){
		conceito = "A";
	}
	
	
	cout<<"Baseado na nota do aluno, o conceito é: "<<conceito<<endl;
	cout<<""<<endl;
	system("pause");
}

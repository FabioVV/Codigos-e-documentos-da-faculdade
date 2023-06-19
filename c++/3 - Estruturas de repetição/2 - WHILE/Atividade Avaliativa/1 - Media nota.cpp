#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	float sum;
	float med;
	int nota;
	int cont = 0;
	
	cout<<"Digite o nome do aluno: ";
	cin >> nome;
	
	
	while(nome != "fim" && nome != "Fim"){
	 cont++;
	 
	 cout<<"Digite a nota do aluno: ";
	 cin >> nota;
	 
	 cout<<""<<endl;
	 
	 
	 sum +=nota;
	 
	 	cout<<"Digite o nome do aluno: ";
	    cin >> nome;
	 
	}
	
	med = sum / cont;
	
	
	cout<<"Média da turma: "<<med<<endl;
	cout<<""<<endl;
	system("pause");
}

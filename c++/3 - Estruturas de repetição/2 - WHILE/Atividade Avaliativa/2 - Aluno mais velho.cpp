#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	int idade;
	
	int mais_velho = 0;
	string nome_mais_velho;
	
	cout<<"Digite a idade do primeiro aluno: ";
	cin >> idade;
	
	mais_velho = idade;
	
	while(idade != 0){
		cout<<"Digite o nome do aluno: ";
	    cin >> nome;
	    
	    if(idade > mais_velho){
	    	mais_velho = idade;
	    	nome_mais_velho = nome;
		}
	    
	    cout<<""<<endl;
	    
	    cout<<"Digite a idade do próximo aluno: ";
	    cin >> idade;
		
	}
	
	cout<<"O aluno mais velho é: "<<nome_mais_velho<<"."<<endl;
	cout<<"O aluno mais velho tem: "<<mais_velho<<" anos."<<endl;
	cout<<""<<endl;
	system("pause");
}

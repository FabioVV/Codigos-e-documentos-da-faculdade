#include <iostream>

using namespace std;

main(){
	
	string nome,velho;
	int idade, mais_velho = 0;
	
	cout<<"Informe o primero nome: ";
	cin >> nome;
	
	while(nome != "fim"){
		cout<<"Informe a idade: ";
     	cin >> idade;
		
		
	 cout<<"Informe o próximo nome: ";
     cin >> nome;
     
       if(idade > mais_velho){
       	   mais_velho = idade;
       	   velho = nome;
	   }
	}
	
	cout<<"Mais velho: "<<mais_velho<<" anos de idade."<<endl;
	cout<<"Seu nome: "<<velho<<endl;
	
	system("pause");
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Dados das pessoas
	string nome;
	float idade;
	float altura;
	
	//Contas
	float medidade = 0;
	int contidade = 0;
	
	//V�riavel de controle do FOR e media
	int i = 0;
	
	//Mais novo e mais velho
	float altomais = altura;
	string altomaisnome;
	float novomais = idade;
	string novomaisnome;
	
	
	    cout<<"Digite o nome da pessoa n�mero "<<"1"<<"�: ";
		cin >> nome;
		
		cout<<"Digite a idade da pessoa n�mero "<<"1"<<"�: ";
		cin >> idade;
		
		cout<<"Digite a altura da pessoa n�mero "<<"1"<<"�: ";
		cin >> altura;
		cout<<""<<endl;
		
	
	for(i; i < 2; i++){
		cout<<"Digite o nome da pessoa n�mero "<<i+2<<"�: ";
		cin >> nome;
		
		cout<<"Digite a idade da pessoa n�mero "<<i+2<<"�: ";
		cin >> idade;
		
		cout<<"Digite a altura da pessoa n�mero "<<i+2<<"�: ";
		cin >> altura;
		
		cout<<""<<endl;
		
		
		if(altura > 1.80){
			medidade += idade;
		}
		
		if(idade > 35){
			contidade++;
		}
		
		if(altura > altomais){
			altomaisnome = nome;
			altomais = altura;
		}
		
		if(novomais > idade){
			novomaisnome = nome;
			novomais = idade;
		}
		
		
	}

	medidade /= i;
	
	cout<<"M�dia de idade das pessoas com mais de 1,80: "<<medidade<<endl;
	cout<<"Total de pessoas com mais de 35 anos: "<<contidade<<endl;
	cout<<""<<endl;
	
	
	cout<<"Nome do mais alto da lista: "<<altomaisnome<<endl;
	cout<<"Altura: "<<altomais<<endl;
	
	cout<<"Nome do mais novo da lista: "<<novomaisnome<<endl;
	cout<<"Idade: "<<novomais<<endl;
	
	
	system("pause");
}

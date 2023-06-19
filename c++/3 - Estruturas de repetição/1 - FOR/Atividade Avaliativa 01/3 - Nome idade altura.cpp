#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Dados das pessoas
	string nome;
	float idade;
	float altura;
	string altomaisnome;
	string novomaisnome;
	
	//Contas
	float medidade = 0;
	int contidade = 0;
	
	//Váriavel de controle do FOR e media
	int i = 0;
	

	//Mais novo e mais velho
    float altomais = 0;
    float novomais = 999;
    
		
	
	
	for(i; i < 3; i++){
	
		cout<<"Digite o nome da pessoa número "<<i+1<<"º: ";
		cin >> nome;
		
		cout<<"Digite a idade da pessoa número "<<i+1<<"º: ";
		cin >> idade;
		
		cout<<"Digite a altura da pessoa número "<<i+1<<"º: ";
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
		
		if(idade < novomais){
			novomaisnome = nome;
			novomais = idade;
		}
		
		
	}

	medidade /= i;
	
	cout<<"Média de idade das pessoas com mais de 1,80: "<<medidade<<endl;
	cout<<"Total de pessoas com mais de 35 anos: "<<contidade<<endl;
	cout<<""<<endl;
	
	
	cout<<"Nome do mais alto da lista: "<<altomaisnome<<endl;
	cout<<"Altura: "<<altomais<<endl;
	
	cout<<"Nome do mais novo da lista: "<<novomaisnome<<endl;
	cout<<"Idade: "<<novomais<<endl;
	
	
	system("pause");
}

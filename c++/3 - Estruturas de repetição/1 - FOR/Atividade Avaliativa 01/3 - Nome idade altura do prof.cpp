#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Dados das pessoas
	string nome;
	float idade;
	float altura;
	float soma_idade_1_8 = 0;
	float cont_pessoas_1_8 = 0;
	float media_idade_1_8 = 0;

	
	for(int i = 0; i < 1; i++){
	
		cout<<"Digite o nome da pessoa número "<<i+1<<"º: ";
		cin >> nome;
		
		cout<<"Digite a idade da pessoa número "<<i+1<<"º: ";
		cin >> idade;
		
		cout<<"Digite a altura da pessoa número "<<i+1<<"º: ";
		cin >> altura;
		
		cout<<""<<endl;
		
		
		if(altura > 1.80){
			soma_idade_1_8 += idade;
			cont_pessoas_1_8++;
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

    media_idade_1_8 = soma_idade_1_8 / cont_pessoas_1_8;
	
	cout<<"Média de idade das pessoas com mais de 1,80: "<<media_idade_1_8<<endl;
	cout<<"Total de pessoas com mais de 35 anos: "<<<<endl;
	cout<<""<<endl;
	
	
	cout<<"Nome do mais alto da lista: "<<<<endl;
	cout<<"Altura: "<<<<endl;
	
	cout<<"Nome do mais novo da lista: "<<<<endl;
	cout<<"Idade: "<<<<endl;
	
	
	system("pause");
}

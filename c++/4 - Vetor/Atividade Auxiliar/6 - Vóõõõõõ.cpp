#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nomes[200], origens[200], destinos[200];
	int total = 0;
	
	cout<<"Digite 'fim' para finalizar"<<endl;
	cout<<"Informe o nome do primeiro PaSSAGEIRO: ";
	cin >> nomes[total];
	
	while(nomes[total] != "fim"){
		cout<<"Informe sua origem: ";
		cin >> origens[total];
		cout<<"Informe o seu destino: ";
		cin >> destinos[total];
		
		total++;
		cout<<"Informe o nome do próximo personagem: ";
		cin >> nomes[total];
	}
		
	for(int i = 0; i < total; i++){
		if(origens[i] == "A"){
			cout<<"Passageiro: "<< nomes[i]<<endl;
		}
	}
	
		for(int i = 0; i < total; i++){
		if(origens[i] == "B"){
			cout<<"Passageiro: "<< nomes[i]<<endl;
		}
	}
	
		for(int i = 0; i < total; i++){
		if(origens[i] == "C"){
			cout<<"Passageiro: "<< nomes[i]<<endl;
		}
	}
		
	system("pause");
}

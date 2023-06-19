#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nomes[100];
	float notas[100];
	float notas_acima[100];
	int i = 0;
	float soma_notas;
	
	cout<<"Informe o primeiro nome: ";
	cin >> nomes[i];
	while(nomes[i] != "fim"){
		cout<<"Informe a nota: ";
		cin >> notas[i];
		
		
		
		i++;
		cout<<""<<endl;
		
		cout<<"Informe o próximo nome: ";
		cin >> nomes[i];
	}
	
	for(int a = 0; a < i; a++){
		soma_notas += notas[a];
	}
	soma_notas /= i;
	
	cout<<"Média: "<<soma_notas<<endl;
	
	for(int x = 0; x < i; x++){
		if(notas[x] > soma_notas){
			cout<<"Pessoas acima da média: "<<nomes[x]<<" "<<notas[x]<<"."<<endl;
		}
	}
	
	
	
}

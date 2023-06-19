#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int total_pessoas = 2;
	
	
	string nomes[5];
	int idades[5];
	int sexos[5];
	
	float idade_media = 0;
	
	string nome_mais_novo;
	int idade_mais_jovem = 120;
	
	
	string homem_mais_velho;
	int idade_mais_velho = 0;
	
	
	for(int p = 0; p < total_pessoas; p++){
		cout<<"Digite o nome "<<p+1<<"º: ";
		cin >> nomes[p];
		
		cout<<"Digite a idade "<<p+1<<"º: ";
		cin >> idades[p];
		
		cout<<"Digite o sexo (1 - Feminino, 2 - Masculino) "<<p+1<<"º: ";
		cin >> sexos[p];
		
		cout<<""<<endl;
	}
	
	for(int i = 0; i < total_pessoas; i++){
		idade_media += idades[i];
	}
	idade_media /= total_pessoas;
	
	
	for(int b = 0; b < total_pessoas; b++){
		if(idades[b] < idade_mais_jovem){
			
			idade_mais_jovem = idades[b];
			nome_mais_novo = nomes[b];
		}
	}
	
	for(int x = 0; x < total_pessoas; x++){
		if(idades[x] > idade_mais_velho && sexos[x] == 2){
			
			idade_mais_velho = idades[x];
			homem_mais_velho = nomes[x];
			
		}
	}
	
	
	cout<<"Idade média: "<<idade_media<<endl;
	cout<<"Nome mais novo: "<<nome_mais_novo<<endl;
	cout<<"Nome homem mais velho: "<<homem_mais_velho<<endl;
		
	system("pause");
}

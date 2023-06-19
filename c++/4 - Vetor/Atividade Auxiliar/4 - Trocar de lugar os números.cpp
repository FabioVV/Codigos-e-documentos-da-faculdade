#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[20];
	int aux;
	
	for(int i = 0; i < 20; i++){
		cout<<"Informe o valor "<<i+1<<"º: ";
		cin >> vetor[i];
	}
	
	for(int i = 0; i < 20; i++){
		cout<<"Vetor original: ";
		cout<<"Vetor[" << i << "]: " << vetor[i]<<endl;
		
	}
	
	int x = 19;
	for(int i = 0; i < 10; i++){
		
		aux = vetor[i];
		vetor[i] = vetor[x];
		vetor[x] = aux;
		x--;
		
		
	}
		
	for(int i = 0; i < 20; i++){
		cout<<"Vetor Trocado: ";
		cout<<"Vetor[" << i << "]: " << vetor[i]<<endl;
		
	}
	
	
	system("pause");
}

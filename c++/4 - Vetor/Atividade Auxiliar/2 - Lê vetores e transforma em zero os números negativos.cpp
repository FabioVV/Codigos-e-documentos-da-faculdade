#include <iostream>
#include <cstddef>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");

	int numeros[1000], total;
	
	cout <<"Quantos n�meros deseja informar: ";
	cin >> total;
	
	for(int i = 0; i < total; i++){
		cout<<"Digite o n�mero "<<i + 1<<" �: ";
		cin >> numeros[i];
	}
	
	cout<<""<<endl;
	cout<<"N�meros: "<<endl;
	for(int i =0; i < total; i++){
		
		cout<<numeros[i]<<endl;
	}
	
	
	for(int i =0; i < total; i++){
		
		if(numeros[i] < 0){
			numeros[i] = 0;
		}
	}
	
	cout<<""<<endl;
	cout<<"N�meros depois da altera��o (transforma em zero os negativos): "<<endl;
	for(int i =0; i < total; i++){
		
		cout<<numeros[i]<<endl;
	}
	

}

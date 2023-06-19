#include <iostream>
#include <cstddef>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");

	int numeros[1000], total;
	
	cout <<"Quantos números deseja informar: ";
	cin >> total;
	
	for(int i = 0; i < total; i++){
		cout<<"Digite o número "<<i + 1<<" º: ";
		cin >> numeros[i];
	}
	
	cout<<""<<endl;
	cout<<"Números: "<<endl;
	for(int i =0; i < total; i++){
		
		cout<<numeros[i]<<endl;
	}
	
	
	for(int i =0; i < total; i++){
		
		if(numeros[i] < 0){
			numeros[i] = 0;
		}
	}
	
	cout<<""<<endl;
	cout<<"Números depois da alteração (transforma em zero os negativos): "<<endl;
	for(int i =0; i < total; i++){
		
		cout<<numeros[i]<<endl;
	}
	

}

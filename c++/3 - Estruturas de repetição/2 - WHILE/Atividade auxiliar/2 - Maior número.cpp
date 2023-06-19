#include <iostream>

using namespace std;

main(){
	int i = 0, numero, maior = 000;
	
	while(i <= 5){
		cout<<"Digite um número: ";
		cin >> numero;
		i++;
		
		if(numero > maior){
			maior = numero;
		}
	}
	
	cout<<"Maior elemento: "<<maior<<endl;
	
	system("pause");
}

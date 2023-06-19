#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	double conta;
	int diaria_total;
	string nome;
	
	cout<<"Digite o nome do cliente: ";
	cin>>nome;
	
	cout<<"Número de dias que o cliente ficou: ";
	cin>>diaria_total;
	
	if(diaria_total > 5){
		conta = ((diaria_total - 5) * 5.50) + 60;
		
	} else if(diaria_total == 5){
		conta = (diaria_total * 5.50) + 60;
		
	} else if(diaria_total < 5){
		conta = (diaria_total * 5.50) + 60;
	}
	
	
	cout<<"Nome do cliente: "<<nome<<endl;
	cout<<"Conta do cliente: "<<conta<<"R$"<<endl;
	
	cout<<""<<endl;
	system("pause");
}

#include <iostream>

using namespace std;


main(){//1
	setlocale(LC_ALL,"Portuguese");
	
	float peso,multa;
	
	cout<<"Quantos kilos foram pescados?: ";
	cin >>peso;
	
	if(peso > 50){
		cout<<"Multado!"<<endl;
		cout<<"(Pescou mais que 50 kilos)";
		multa = (peso - 50) * 4;
		cout<<" A sua multa foi de: "<<"R$"<<multa<<" Reais."<<endl;
	} 
		

	cout<<""<<endl;
	system("pause");
	cout<<""<<endl;
}//1

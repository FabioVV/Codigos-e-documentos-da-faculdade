#include <iostream>

using namespace std;

main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	float cel,fah;
	
	cout<< "Informe a temperatura em Celcius: "<<endl;
	cin>> cel;
	
	fah = (cel * 1.8) + 32;
	
	cout<<"A temperatura em Fahrenheit é: "<<fah<<endl;
	
	system("pause");
	
}



#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	float base, altura, area;
	
	cout<<"Digite a base do tri�ngulo: ";
	cin>> base;
	cout<<"Digite a altura do tri�ngulo: ";
	cin>> altura;
	
	area = (base*altura) / 2;
	
	cout<<"O resultado �: " <<area <<"cm2" <<endl;
	
	system("pause");
}

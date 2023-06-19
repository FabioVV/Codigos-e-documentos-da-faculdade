#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	float base, altura, area;
	
	cout<<"Digite a base do triângulo: ";
	cin>> base;
	cout<<"Digite a altura do triângulo: ";
	cin>> altura;
	
	area = (base*altura) / 2;
	
	cout<<"O resultado é: " <<area <<"cm2" <<endl;
	
	system("pause");
}

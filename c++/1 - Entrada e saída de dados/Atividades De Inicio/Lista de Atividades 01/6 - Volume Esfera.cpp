#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double raio, vol, pi;
	
	
	pi = 3.1415926535897932384626433;
	
	cout<<"Digite o raio da esfera: ";
	cin >>raio;
	
	vol = ((4 * pi) * pow(raio,3)) / 3;
	

	cout <<""<<endl;
	cout <<"Volume da esfera: "<<vol<<"m3";
	
	system("pause");
}



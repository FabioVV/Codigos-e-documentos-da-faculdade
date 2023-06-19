#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double x,y,z;
	double check;
	
	cout<<"Digite o valor de x: ";
	cin>>x;
	
	cout<<"Digite o valor de y: ";
	cin>>y;
	
	cout<<"Digite o valor de z: ";
	cin>>z;
	
	if(x > y+z || y > z+x || z > y+x){
		cout<<"Não é um Triângulo! "<<endl;
	}else if(x == y && x == z){
		cout<<"Triângulo Equilátero "<<endl;
	} else if(x != y && x != z && y!=z){
		cout<<"Triângulo escaleno "<<endl;
	} else {
		cout<<"Triângulo isóscele "<<endl;
	}
	
	
	system("pause");
}

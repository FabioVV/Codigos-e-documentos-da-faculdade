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
		cout<<"N�o � um Tri�ngulo! "<<endl;
	}else if(x == y && x == z){
		cout<<"Tri�ngulo Equil�tero "<<endl;
	} else if(x != y && x != z && y!=z){
		cout<<"Tri�ngulo escaleno "<<endl;
	} else {
		cout<<"Tri�ngulo is�scele "<<endl;
	}
	
	
	system("pause");
}

#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	
	cout<<"Digite um n�mero positivo ou negativo: ";
	cin>>num;
	
	if(num > 0){
	    cout<<"N�mero positivo! "<<endl;
	} else if (num < 0){
		cout<<"N�mero negativo! "<<endl;
	} else if(num == 0){
		cout<<"N�mero zero! "<<endl;
	}
	
	system("pause");
}

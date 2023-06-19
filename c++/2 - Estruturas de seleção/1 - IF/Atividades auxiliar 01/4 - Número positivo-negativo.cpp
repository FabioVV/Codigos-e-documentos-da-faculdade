#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	
	cout<<"Digite um número positivo ou negativo: ";
	cin>>num;
	
	if(num > 0){
	    cout<<"Número positivo! "<<endl;
	} else if (num < 0){
		cout<<"Número negativo! "<<endl;
	} else if(num == 0){
		cout<<"Número zero! "<<endl;
	}
	
	system("pause");
}

#include <iostream>
#include <math.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double altura;
	string sexo;
	double peso_ideal;
	
    cout<<"Digite a altura dessa mesma pessoa: ";
	cin>>altura;
	cout<<"Digite o sexo da pessoa (M = masculino/F = feminino): ";
	cin>>sexo;
	
	
	
	if(sexo == "m" || sexo == "M" ){
		peso_ideal = (72.7 * altura) - 58;
		cout<<"Sexo da pessoa: "<<sexo<<endl;
	    cout<<"Peso Ideal: "<<peso_ideal<<"KG"<<endl;
	} else if(sexo == "f" || sexo == "F"){
		peso_ideal = (62.1 * altura) - 44.7;
		cout<<"Sexo da pessoa: "<<sexo<<endl;
	    cout<<"Peso Ideal: "<<peso_ideal<<"KG"<<endl;
   } else if(sexo != "f" && sexo != "F" && sexo != "m" && sexo != "M"){
   	    cout<<"Gênero Inválido!"<<endl;
   }
   
 
	cout<<""<<endl;
	system("pause");
	cout<<""<<endl;
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
    string nome;
    string sexo;
    float salario = 0;
    
    int cont_m;
    float conta_m;
    int cont_f;
    float conta_f;
    
    cout<<"Digite o sexo do funcionário(a) (M = Masculino, F = Feminino e X para encerrar): ";
    cin >> sexo;
    
	while(sexo != "x" && sexo != "X"){
	 cout<<"Digite o nome deste funcionário(a): ";
     cin >> nome;
     
     cout<<"Digite o salário deste funcionário(a): ";
     cin >> salario;
     
     if(sexo == "M" || sexo == "m"){
     	cont_m++;
     	conta_m += salario;
     	
	 } else if(sexo == "F" || sexo == "f"){
	 	cont_f++;
     	conta_f += salario;
	 }
     
     
     cout<<""<<endl;
     
     cout<<"Digite o sexo do funcionário(a) (M = Masculino, F = Feminino e X para encerrar): ";
     cin >> sexo;
	  
	}
	
	conta_m /= cont_m;
	conta_f /= cont_f;
	
	

    cout<<"Média salárial do sexo masculino: "<<"R$ "<<conta_m<<" Reais"<<endl;
    cout<<"Média salárial do sexo feminino: "<<"R$ "<<conta_f<<" Reais"<<endl;
    if(conta_m > conta_f){cout<<"Maior média dentro os sexos: "<<"Sexo Masculino com "<<"R$ "<<conta_m<<" Reais"<<endl;}
    else{cout<<"Maior média dentro os sexos: "<<"Sexo Feminino com "<<"R$ "<<conta_f<<" Reais"<<endl;}
	cout<<""<<endl;
	system("pause");
}

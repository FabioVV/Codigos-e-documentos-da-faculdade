#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");

    int i = 0;
	int idade;
	int conta = 0;
	
	for(i ; i < 3; i++){
		cout<<"Informe a idade do aluno "<<i+1<<"º: ";
		cin >> idade;
		conta += idade;
		
	}
	
	conta /= i;
	cout<<"Faixa etária: "<<conta<<endl;
	
   system("pause");	
}

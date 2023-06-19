#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double nota;
	
	cout<<"Digite a nota do aluno: ";
	cin>>nota;
	
	if(nota >= 7){
		cout<<"Aprovado! "<<endl;
	} else if (nota >= 5 && nota <= 6.9){
		cout<<"Recuperação! "<<endl;
	} else if(nota >=0 && nota <= 4.9){
		cout<<"Reprovado! "<<endl;
	}
	
	
	system("pause");
	
}

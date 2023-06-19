#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	float idade;
	float altura;
	float sum;
	
	
	int cont = 0;
	int i = 0;
	
	for(i; i < 2; i++){
		
		cout<<"Digite a idade do aluno(a) "<<i+1<<"º"<<": ";
		cin >> idade;
		cout<<"Digite a altura do aluno(a) "<<i+1<<"º"<<": ";
		cin >> altura;
		
		if(altura > 1.75){
			sum+=idade;
		}
		if(idade > 25){
			cont++;
		}
		
	}
	
	sum /=i;
	
	cout<<""<<endl;
	
	cout<<"Total de alunos acima de 25 anos: "<<cont<<endl;
	cout<<"Média de idade dos alunos acima de 1.75: "<<sum<<endl;

	system("pause");
}

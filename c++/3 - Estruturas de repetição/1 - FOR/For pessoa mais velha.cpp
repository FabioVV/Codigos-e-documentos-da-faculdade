#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int alum;
	int idade;
	int sum = 0;
	int sum_novo = 9999;
	
	cout<<"Digite o número de alunos da sala: ";
	cin >> alum;
	
	cout<<"Digite a idade do aluno 1 "<<"º: ";
	cin >> idade;
	
	sum = idade;
	sum_novo = idade;
	
	for(int i = 0; i < alum-1; i++){
		
		cout<<"Digite a idade do aluno "<<i+1<<"º: ";
		cin >> idade;
		
		
		if(idade > sum){
			
			sum = idade;
			
		}
		
		if(idade < sum_novo){
			
			sum_novo = idade;
			
		}
	}
	
	cout<<"mais velho: "<<sum<<endl;
	cout<<"mais novo: "<<sum_novo<<endl;
	system("pause");
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	float idade;
	float sum;
	int i = 0;
	
	for(i; i < 2; i++){
		cout <<"Digite a idade do aluno "<<"nº"<<i+1<<": ";
		cin >> idade;
		sum = (sum + idade);
	}
	
	sum /= i;
	
	cout<<"Média: "<<sum<<endl;
	
	system("pause");
}

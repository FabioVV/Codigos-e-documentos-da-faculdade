#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	float idade;
	float sum;
	int i = 0;
	
	for(i; i < 2; i++){
		cout <<"Digite a idade do aluno "<<"n�"<<i+1<<": ";
		cin >> idade;
		sum = (sum + idade);
	}
	
	sum /= i;
	
	cout<<"M�dia: "<<sum<<endl;
	
	system("pause");
}

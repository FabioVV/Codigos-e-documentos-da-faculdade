#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	int nums;
	int cont = 0;
	
	cout<<"Digite quantos n�meros ser�o informados: ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		cout<<"Informe n�meros: ";
		cin >> nums;
		
		if(nums < 0){
			cont++;
		}
		
	}
	
	cout<<"Total de n�meros negativos: "<<cont<<endl;
	
	
	system("pause");
}

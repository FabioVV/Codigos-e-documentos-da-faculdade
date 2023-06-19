#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	int nums;
	int cont = 0;
	
	cout<<"Digite quantos números serão informados: ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		cout<<"Informe números: ";
		cin >> nums;
		
		if(nums < 0){
			cont++;
		}
		
	}
	
	cout<<"Total de números negativos: "<<cont<<endl;
	
	
	system("pause");
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	float sum;
	
	
	
	cout <<"Digite um número "<<"º"<<"1"<<": ";
	cin >> num;
	
	sum = num;
	
	for(int i = 0; i < 4; i++){
		cout <<"Digite um número "<<"º"<<i+2<<": ";
		cin >> num;
		
		
		if(num < sum){
			sum = num;
		}
		
	}
	
	cout<<"O menor número é: "<<sum<<endl;

	system("pause");
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int conta;
	int number;
 


    cout<<"Digite o número da tabuada que você deseja: ";
    cin >> number;
    
    
	for(int i = 1; i < 10; i++){

		conta = number * i;
	    cout<<number<<"x"<<i<<": "<<conta<<endl;
	    
	}
    
  
    
	system("pause");
}

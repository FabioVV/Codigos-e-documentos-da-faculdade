#include <iostream>

using namespace std;


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b;
	b = 0;
	a = 10;
	
	while(b < 10){
		cout<<"While"<<endl;
		b++;
		cout<<""<<b<<endl;
	}

	for(int i = 0; i < a; i++){
		
		cout<<"For"<<endl;
		cout<<""<<i<<endl;
	}
	
	system("pause");
}

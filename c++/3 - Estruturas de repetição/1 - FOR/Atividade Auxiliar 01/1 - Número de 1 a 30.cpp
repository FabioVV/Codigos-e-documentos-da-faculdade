#include <iostream>
#include <windows.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont = 0;
	
	for(int i = 0; i < 30; i++){
		
		cout<<""<<i+1<<endl;
		Sleep(100);
		
	}
	
	
	system("pause");
}

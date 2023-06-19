#include <iostream>
#include <cstddef>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a[5], x[5], y[5];
	
	for(int i = 0; i < 5; i++){
		cout<<"X na posição "<< i + 1 <<": ";
	    cin>> x[i];
	}
	
	int cont = 0;
	while (cont < 5){
		cont++;
		cout<<"y: ";
	    cin>> y[cont];
	}
	
	
	cout<<"x[0]: "<< x[0]<<endl;
	cout<<"x[1]: "<< x[1]<<endl;
	cout<<"x[2]: "<< x[2]<<endl;
	cout<<"x[3]: "<< x[3]<<endl;
	cout<<"x[4]: "<< x[4]<<endl;
	
	cout<<"y[0]: "<< y[0]<<endl;
	cout<<"y[1]: "<< y[1]<<endl;
	cout<<"y[2]: "<< y[2]<<endl;
	cout<<"y[3]: "<< y[3]<<endl;
	cout<<"y[4]: "<< y[4]<<endl;
	
}

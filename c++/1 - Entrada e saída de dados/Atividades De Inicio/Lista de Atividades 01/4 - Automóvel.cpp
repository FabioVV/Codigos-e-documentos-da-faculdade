#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	string marca;
	double kmi, kmf, litros_cons;
	double conta;
	
	cout <<"Digite a marca do veiculo: ";
	cin >>marca;
	system("cls");
	
	cout <<"Digite a sua kilometragem inicial: ";
	cin >>kmi;
	system("cls");
	
	cout <<"Digite a sua kilometragem final: ";
	cin >>kmf;
	system("cls");
	
	cout <<"Digite os litros consumidos: ";
	cin >>litros_cons;
	system("cls");
	
	conta = kmf - kmi;
	conta /= litros_cons;

	
	cout <<"============Relatório============"<<endl;
	cout <<"Marca do veiculo: "<<marca<<endl;
	cout <<"Kilometragem inical: "<<kmi<<endl;
	cout <<"Kilometragem final: "<<kmf<<endl;
	cout <<"Litros consumidos: "<<litros_cons<<endl;
	cout <<"Consumo do veiculo em km/l: "<<conta<<endl;
	cout <<"============Fim do Relatório============"<<endl;
	
	cout<<""<<endl;
	system("pause");
	cout<<""<<endl;
}

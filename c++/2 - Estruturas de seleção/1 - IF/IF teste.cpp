#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int quantidade;
	string a;
	bool test;
	
	
	cout<<"Deseja começar? (s/n): ";
	cin >>a;
	
	cout<<""<<endl;
	
	
	if(a == "s"){
		
	    test = true;

    	do{
    		cout<<"Digite uma quantidade de itens: ";
	        cin >>quantidade;
	        
	    	if(quantidade < 10){
	    	    cout<<"Menos do que 10 itens. OK!";
	    	    cout<<""<<endl;
	    	    cout<<"Deseja parar? (s/n): ";
	    	    string b;
	    	    cin>>b;
	    	    if(b == "s"){
	    	    	test = false;
				} else if(b == "s") {
					cout<<""<<endl;
	    	    	cout<<"Ok.";
	    	    	cout<<""<<endl;	
				}
	        } else if(quantidade >= 10){
	    	    cout<<"Mais do que 10 itens. Not OK!";
	    	    cout<<""<<endl;
	    	    cout<<"Deseja parar? (s/n): ";
	    	    string c;
	    	    cin>>c;
	    	   if(c == "s"){
	    	    	test = false;
				} else if(c == "s") {
					cout<<""<<endl;
	    	    	cout<<"Ok.";
	    	    	cout<<""<<endl;	
				}
         	} else {
         		cout<<""<<endl;
	          	cout<<"Digite um valor válido.";
	          	cout<<""<<endl;
        	}
	
    	} while(test == true);
		
	} else if (a == "n") {
		cout<<"Ok.";
	} else {
		cout<<""<<endl;
		cout<<"Digite um valor válido.";
	    cout<<""<<endl;
	}
	
	

	cout<<""<<endl;
	system("pause");
	cout<<""<<endl;
}

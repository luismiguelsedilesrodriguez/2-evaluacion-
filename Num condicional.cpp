//instrucciones básicas
//condicionales  
#include<iostream>//Librería de cabecera 
using namespace std;

int main(){
	//definimos 3 variables 
	int n1,n2,n3;
	cout<<"Introduce tres numeros enteros: ";
	cin>> n1>> n2 >>n3;
	if(n1>n2){
		if(n1>n3){
			cout<<"El mayor es"<<n1;
		}
	}
	else{
		cout<<"El mayor es"<<n3;
	}
	

#include<iostream>
using namespace std;
int esPitagorica(int num1,int num2, int num3){
	//Decidimos cial es la hipotenusa
	int c1, c2, hip;
	int respuesta;
	if(num1>num2 && num1>num3){
		hip=num1;
		c1=num2;
		c2=num3;
	}
	else{
		if(num2>num1 && num2>num3){
			hip=num2;
			c1=num1;
			c2=num3;
		}
		else{
			hip=num3;
			c1=num1;
			c2=num2;
		}
	}
	if(hip*hip==c1*c1+c2*c2)
	return respuesta;
}

int main(){
	int num1, num2, num3;
	int respuesta;
	cout<<"Introduce tres numeres: "<<endl;
	cout<<"PRIMER NUMERO;; ";
	cin>>num1;
	cout<<"SEGUNDO NUMERO;; ";
	cin>>num2;
	cout<<"TERCER NUMERO;; ";
	cin>>num3;
	respuesta=esPitagorica(num1,num2,num3);

	if(respuesta==1){
		cout<<"Es una terna pitagorica";
	}
	else{
		cout<<"No es una terna pitagorica";
	}
}

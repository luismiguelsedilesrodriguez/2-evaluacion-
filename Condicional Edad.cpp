//Instrucciones b�sicas 
#include<iostream>//Librer�a de cabecera
using namespace std;

int main(){
	//Definimos tres variables
	int edad;
	cout <<"introduce tu edad:"; //Equivalente a print
	cin >> edad; //Equivalente a input
	if(edad>=18){
		//Rama verdadera 
		cout<<"Eres mayor de edad";
	}
	else{
		//Rama falsa
		cout<<"Eres menor de edad";
	}	 
	
	return 0; //Comprueba que no hay ning�n error 

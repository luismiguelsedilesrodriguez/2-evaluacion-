//instrucciones básicas
//condicional multiple 
#include<iostream>//Librería de cabecera 
using namespace std;

int main(){
	//definimos 3 variables 
	int resp;
	cout<<"*********************************"<<endl;
	cout<<"*************MENU****************"<<endl;
	cout<<"*********************************"<<endl;
	cout<<"1. Volver a mostrar el menu"<<endl;
	cout<<"2. Despedirme"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Elige una opcion (1,2,3): "<<endl;
	cin>> resp;
	switch (resp){
		case 1:
			cout<<"*********************************"<<endl;
			cout<<"*************MENU****************"<<endl;
			cout<<"*********************************"<<endl;
			cout<<"1. Volver a mostrar el menu"<<endl;
			cout<<"2. Despedirme"<<endl;
			cout<<"3. Salir"<<endl;
			cout<<"Elige una opcion (1,2,3): "<<endl;
			break;
		case 2:
			cout<<"Estas despedido";
			break;
		case 3:
			break;
		default:
			cout<<"No has elegido ninguna opcion";
	}
	
	return 0;
}

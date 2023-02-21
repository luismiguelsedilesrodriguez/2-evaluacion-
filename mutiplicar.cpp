#include<iostream>
using namespace std;

int main(){
	int cont;
	int n_tabla;
	cout<<"dime que tabla quieres: ";
	cin>>n_tabla;
	cout<<"****************";
	cout<<"******** TABLA DEL " <<n_tabla <<endl;
	for(cont=1;cont<=10;cont++){
		cout<<n_tabla<<" X "<<cont<<" = "<<n_tabla*cont<<endl;
}
return 0;
}

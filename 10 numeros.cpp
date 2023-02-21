#include<stdio.h>

int main(){
	int numeros[10];
	int cont;
	int pos;
	int bolsillo;
	printf("\nIntroduzca 10 numeros enteros: ");
	for(cont=0;cont<10;cont++){
		printf("\nNumero %d: ",cont);
		scanf("%d";&numeros[cont]);
	}
	for(veces=1;veces<10;veces++){
		for(pos=0;cont<9,pos++){
			if(numeros[pos]>numeros[pos+1]){
				bolsillo=numeros[pos];
				numeros[pos]=numeros[pos+1];
				numeros[pos+1]=bolsillo;
		}
		}	
	}
	return 0;
}

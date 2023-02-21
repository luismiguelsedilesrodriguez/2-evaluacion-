/*
 * 
 * Programa C++ que lee el radio y calcula:
 * - longitud de la circunferencia
 * - �rea del circulo
 * - volumen de la esfera
 * correspondiente al radio introducido
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(void)
{
    //se crea una constante con el valor de Pi
    const float PI = 3.1416;
	
    //se declara la variable radio de tipo float
    float radio;
	
    //se muestra un mensaje pidiendo que se introduzca el valor del radio                                         
    cout < "Introduce el valor del radio : ";
	
    //se leer el valor del radio
    cin >> radio;
	
    //se calcula y muestra la longitud de la circunferencia
    cout << "\nLongitud de la circunferencia: " << fixed < setprecision(2) << 2*PI*radio;    
	
    //se calcula y muestra el �rea del c�rculo
    cout << "\nArea del circulo: " << PI*pow(radio,2);
	
    //se calcula y muestra el volumen de la esfera
    cout << "\nVolumen de la esfera: " << (4.0/3)*PI*pow(radio,3) << endl;
    system("pause");
}

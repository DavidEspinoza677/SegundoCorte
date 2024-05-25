/*4. Escriba el programa que calcule la suma de los números impares
mientras sean distintos de cero. */
#include <iostream>
using namespace std;
int num;
int suma = 0;

void sumaImpares()
{
    do
    {
        cout << "Dime un numero impar: ";
        cin >> num;
        if (num % 2 != 0 && num != 0)
        {
            suma += num;
        }
        

    } while ( num % 2 != 0 && num != 0);
    cout << "La suma de los numeros impares ingresados es: " << suma;
}

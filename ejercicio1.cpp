/*1. Realizar un programa que acumule (sume) valores ingresados por
teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha
finalizado la carga). Imprimir el valor acumulado e informar si dicho
valor es cero, mayor a cero o menor a cero*/

#include <iostream>
#define MAX 10000
using namespace std;

void ingresarNumeros();
int sumarNumeros();

int pos = 0;
int num;
int numeros[MAX];
int suma = 0;

void ingresarNumeros()
{
    do
    {
        cout << "Ingresa el numero que quieres sumar, para finalizar la carga, ingresar el numero 9999" << endl;
        cout << "Ingresa tu numero: ";
        cin >> num;
        if (num != 9999)
        {
            numeros[pos] = num;
            pos++;
        }
    } while (num != 9999);

    if (sumarNumeros() < 0)
    {
        cout << "La suma de los numeros es: " << sumarNumeros() << " y es menor a cero";
    }
    else if (sumarNumeros() == 0)
    {
        cout << "La suma de los numeros es: " << sumarNumeros() << " y es igual a cero";
    }
    else
    {
        cout << "La suma de los numeros es: " << sumarNumeros() << " y es mayor a cero";
    }
}

int sumarNumeros()
{

    if (pos >= 0)
    {
        pos--;
        suma += numeros[pos];
    }
    return suma;
}
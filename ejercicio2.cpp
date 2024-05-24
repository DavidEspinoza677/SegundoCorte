/*2. Escriba el programa para leer 15 números negativos y convertirlos
a positivos e imprimir dichos números.*/

#include <iostream>
using namespace std;

void numNegaPos();
void numNegaPos()
{
    int num, positivos[15];
    int i = 0;
    do
    {
        cout << "Ingrese un número negativo: ";
        cin >> num;
        if (num >= 0)
        {
            cout << "El numero tiene que ser negativo" << endl;
            
        }
        positivos[i] = -num;
        i++;
    } while (i < 15);
    cout << "Los números positivos son: ";
    i = 0;
    do
    {
        cout << positivos[i] << " ";
        i++;
    } while (i < 15);
    cout << endl;
}



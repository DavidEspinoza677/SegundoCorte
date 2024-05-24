#include <iostream>
using namespace std;

int cantidad;
int suma = 0;

void ejercicio1();
void ejercicio1()
{
    do
    {
        cout << "Ingrese la cantidad a sumar" << endl;
        cin >> cantidad;
        
        if (cantidad == 9999)
        {
            cout << "Terminando el proceso..." << endl;
            break;
        }
        
        suma += cantidad;
        cout << "La suma en este momento es de: " << suma << endl;
    }
    while (true);

    if (suma == 0)
    {
        cout << "El valor acumulado es cero" << endl;
    }
    else if (suma > 0)
    {
        cout << "El valor acumulado es mayor a cero" << endl;
    }
    else
    {
        cout << "El valor acumulado es menor a cero" << endl;
    }
}

void ejercicio2();
void ejercicio2()
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

void ejercicio3();

    void ejercicio3(){ 
    char respuesta;
    int num;

    do
    {
        cout << "Ingrese un número: ";
        cin >> num;

        cout << "¿Desea avanzar?  S 2. N: ";
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    if (respuesta == 'N' || respuesta == 'n')
    {
        cout << "Terminando del programa..." << endl;

    }else{
        cout << "Respuesta incorrecta" << endl;
    }
}

int num;
extern int suma;

void ejercicio4();
void ejercicio4()
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

void ejercicio5();
void ejercicio5(){
    int num = 15;

    cout<< "Múltiplos de 3 y 5 entre 15 y 45:" << endl;
    do {
        if (num % 3 == 0 || num % 5 == 0) {
            cout << num << " ";
        }
        num++;
    } while (num <= 45);

    cout<< endl;
}
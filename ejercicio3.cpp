#include <iostream>

using namespace std;


    int num;
    char continuar;
int main(int argc, char const *argv[])
{
     do {
        cout << "Ingrese un numero: ";
        cin >> num;
        cout << "Usted ingreso: " << num << endl;

        do {
            cout << "¿Quiere continuar? (S/N): ";
            cin >> continuar;
            continuar = toupper(continuar);
            if (continuar != 'S' && continuar != 'N') {
                cout << "Entrada no valida. Por favor, ingrese S o N." << endl;
            }
        } while (continuar != 'S' && continuar != 'N');

    } while (continuar == 'S');

    cout << "Programa terminado." << endl;
    return 0;
}

   

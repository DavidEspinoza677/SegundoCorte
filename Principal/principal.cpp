#include <iostream>
#include "ejercicios.cpp"

using namespace std;

int main()
{
    int numEjer;

    cout <<"Ingrese el numero de ejercicio que quiere usar:" <<endl;
    cin >>numEjer;

    if (numEjer == 1)
    {
        ejercicio1();
    }else if (numEjer)
    {
        ejercicio2();
    }else if (numEjer)
    {
        ejercicio3();
    }else if (numEjer)
    {
        ejercicio4();
    }else if (numEjer)
    {
        ejercicio5();
    }else{
        cout <<"Este ejercicio no existe..."<<endl;
    }
    
    
    
    
    
    return 0;
}

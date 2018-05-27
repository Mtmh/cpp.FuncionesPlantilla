#include <iostream>

using namespace std;

template<typename tipo>tipo suma(tipo a, tipo b) // Es una funcion lo de tipo
// puedes poner lo que quieras como una variable, Normalmente T mayuscula;
{
    return a + b;
}

int main()
{

    cout << suma(1, 2) << endl; //<int> Lo puedes poner
    cout << suma(1.0f, 2.0f) << endl; //<float> o
    cout << suma(1.0, 2.0) << endl; // <double> Quitar

    return 0;
}

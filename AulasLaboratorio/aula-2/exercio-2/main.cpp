#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
}

int main()
{
    cout << "Aula 2 - Exercicio 2" << endl;

    int a, b;

    a = 5;
    b = 97;
    cout << "Valor de A: " << a << endl;
    cout << "Valor de B: " << b << endl;
    cout << endl;

    troca(&a, &b);

    cout << "Valor de A: " << a << endl;
    cout << "Valor de B: " << b << endl;

    return 0;
}

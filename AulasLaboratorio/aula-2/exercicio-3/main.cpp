#include <iostream>

using namespace std;

void divisao(int num, int div, int *q, int *r)
{
    *q = num/div;
    *r = num%div;
}

int main()
{
    cout << "Aula 2 - Exercicio 3" << endl;

    int num, div;
    int q, r;

    cout << "Digite o numerador: ";
    cin >> num;

    cout << "Digite o divisor: ";
    cin >> div;

    divisao(num, div, &q, &r);

    cout << "Quociente: " << q
         << " - Resto: " << r;

    return 0;
}

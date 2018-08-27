#include <iostream>

using namespace std;

int main()
{
    cout << "Aula 2 - Exercicio 1" << endl;

    int x;
    int *pt;

    cout << "Digite um inteiro: ";
    cin >> x;
    cout << endl;

    pt = &x;

    cout << "Conteudo de pt: " << pt << endl;
    cout << "Endereco de x: "  << &x << endl;
    cout << endl;
    *pt = *pt * 10;

    cout << "Conteudo apontado por pt: " << *pt << endl;

    pt = pt + 10;

    cout << "Conteudo de pt: " << pt << endl;

    //significa que pulou 10 posicoes de endereco

    return 0;
}

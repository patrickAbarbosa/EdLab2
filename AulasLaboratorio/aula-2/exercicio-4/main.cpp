#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
    *par = 0;
    *impar = 0;
    *negativos = 0;
    for(int i = 0; i < tam; i ++)
    {
        if(vet[i]%2)
            (*impar)++;
        else
            (*par)++;
        if(vet[i] < 0)
            negativos++;
    }
    return negativos;
}

int main()
{
    cout << "Aula 2 - Exercicio" << endl;

    int vet[5] = {2, -1, 6, -3, -7};
    int p, i, neg;
    if(func(5, vet, &p, &i, &neg))
        cout << "Possui valores Negativo" << endl;
    else
        cout << "Nao possui numeros Negativos" << endl;

    cout << "Par: " << p << "- Impar: " << i <<endl;

    return 0;
}

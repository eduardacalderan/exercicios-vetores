#include <iostream>
#include <ctime>

using namespace std;

#define TAM 10

/*102) Escrever um algoritmo que gere um vetor V[10] com valores no intervalo de 0 a 8 e
mostre os valores gerados. A seguir, crie um vetor B contendo o fatorial de cada elemento
de V.
Mostrar os valores do vetor B.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[TAM], b[TAM], fatorialDeCadaElemento;
    srand(time(NULL));


    for(int i = 0; i<TAM; i++)
    {
        v[i] = rand()%9;
        cout <<v[i] << "!"<< " = ";
        fatorialDeCadaElemento = 1;

        for(int j=v[i]; j>1; j--)
        {
            fatorialDeCadaElemento*=j;
            cout << j << "x";

        }

        b[i] = fatorialDeCadaElemento;

        if (v[i]== 1 || v[i] == 0) {
            cout  << b[i] << endl;

        } else {
            cout << "1 = " << b[i] << endl;

        }


    }



}

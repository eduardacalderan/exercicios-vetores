#include <iostream>
#include <ctime>

using namespace std;

#define TAM 5

/*108) Escrever um algoritmo e um programa que gere dois vetores X[5] e Y[5] com valores
no intervalo de 0 a 50. A seguir:
a) Ordenar o vetor X em ordem crescente. Mostre o vetor X.
b) Ordenar o vetor Y em ordem decrescente. Mostre o vetor Y.
c) Criar um vetor Z que contenha os valores ímpares de X. Mostre o vetor Z.
d) Criar um vetor W que contenha os valores pares de X. Mostre o vetor W.
e) Criar um vetor S que contenha os valores de X e Y que são maiores que 30. Mostre o
vetor S.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int X[TAM], Y[TAM], Z[TAM], W[TAM], S[TAM*2];
    int contPar=0, contImpar=0, cont30=0;
    int aux;
    bool trocou;



    for(int i=0; i<TAM; i++)
    {
        X[i] = rand()%51;
    }



    do
    {
        trocou = false;

        for(int i=0; i<TAM-1; i++)
        {
            if(X[i] > X[i+1])
            {
                aux = X[i];
                X[i] = X[i+1];
                X[i+1] = aux;
                trocou = true;
            }
        }

    }
    while(trocou == true);


    cout << "X: ";
    for(int i=0; i<TAM; i++)
    {
        cout << X[i] << ", ";
    }
    cout << endl;





    for(int i=0; i<TAM; i++)
    {
        Y[i] = rand()%51;
    }


    do
    {
        trocou = false;

        for(int i=0; i<TAM-1; i++)
        {
            if(Y[i] < Y[i+1])
            {
                aux = Y[i];
                Y[i] = Y[i+1];
                Y[i+1] = aux;
                trocou = true;
            }
        }

    }
    while(trocou == true);


    cout << "Y: ";
    for(int i=0; i<TAM; i++)
    {
        cout << Y[i] << ", ";
    }
    cout << endl;




    contPar=0, contImpar=0, cont30=0;
    for(int i=0; i<TAM; i++)
    {
        if(X[i]%2==0)
        {
            W[contPar] = X[i];
            contPar++;
        }

        if(X[i]%2 != 0)
        {
            Z[contImpar] = X[i];
            contImpar++;
        }

        if(X[i] > 30)
        {
            S[cont30] = X[i];
            cont30++;
        }

        if(Y[i] > 30)
        {
            S[cont30] = Y[i];
            cont30++;
        }

    }




    cout << "Z: ";
    for(int i=0; i<contImpar; i++)
    {
        cout << Z[i] << ", ";
    }
    cout << endl;


    cout << "W: ";
    for(int i=0; i<contPar; i++)
    {
        cout << W[i] << ", ";
    }
    cout << endl;


    cout << "S: ";
    for(int i=0; i<cont30; i++)
    {
        cout << S[i] << ", ";
    }
    cout << endl;


}

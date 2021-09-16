#include <iostream>
#include <ctime>

using namespace std;

#define TAM 20

/*106) Escrever um algoritmo que gere um vetor V[20] com valores no intervalo de 0 a 100 e
mostre os valores gerados. Modifique o vetor de modo que o primeiro elemento passe
para a última posição, e desloque todos os outros elementos uma posição para a esquerda. */

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
    int v[TAM],aux;

    for(int i=0; i<TAM; i++)
    {
        v[i]= rand()%101;

        cout<<v[i];
        if(i<TAM-1)
            cout << ", ";
        else
            cout << "]" <<endl;
    }
    cout<<endl;
    aux=v[0];
    for(int i=0; i<TAM-1; i++)
    {
        v[i] = v[i+1];
    }
    v[TAM-1] = aux;

    cout<<"\nTroca de valores:\n";
    cout<<"[";
    for(int i=0; i<TAM; i++)
    {
        cout<<v[i];
         if(i<TAM-1)
            cout << ", ";
        else
            cout << "]" <<endl;
    }
    cout<<endl;

}

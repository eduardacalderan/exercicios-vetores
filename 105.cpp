#include <iostream>
#include <ctime>
using namespace std;

#define TAM 7

/*105) Faça um algoritmo que leia um vetor V[7] de números inteiros :
a) Na hora de ler cada valor do vetor verifique se este elemento já existe no vetor V,
obrigando que todos os elementos sejam diferentes, não pode existir números iguais.
b) Conte quantos números lidos no vetor são maiores que 60.
c) Crie um Vetor P com somente os valores pares do vetor V.
d) Ordene de forma decrescente o vetor P.
e) Mostre o vetor P.
*/

int main()
{

    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));


    int V[TAM], PAR[TAM], valor, aux;
    bool repetido, trocou;
    int contPar=0, cont60=0;


    for(int i=0; i<TAM; i++)
    {
        do{
            repetido = false;
            cout << "Informe um valor para V [" << i << "]: ";
            cin >> valor;

            for(int j=0; j<i; j++)
            {
                if(V[j] == valor)
                    repetido = true;
            }
            if(repetido == true)
                cout << "O valor " << valor << " já existe no vetor, digite um valor diferente!\n";

        }while(repetido == true);


        V[i] =  valor;

    }
    cout << endl;

    for(int i=0; i<TAM; i++)
    {
        if(V[i]%2 == 0)
        {
            PAR[contPar] = V[i];
            contPar++;
        }

        if(V[i] > 60)
            cont60++;
    }



    do{
        trocou = false;

        for(int i=0; i<contPar-1; i++)
        {
            if(PAR[i] < PAR[i+1])
            {
                aux = PAR[i];
                PAR[i] = PAR[i+1];
                PAR[i+1] = aux;
                trocou = true;
            }
        }

    }while(trocou == true);

    cout << "\nNumero de elementos maiores que 60: " << cont60 << endl;
    cout << "Vetor de elementos pares: ";
    for(int i=0; i<contPar; i++)
    {

        cout << PAR[i];
        if(i!=contPar-1)
            cout << ", ";
    }
    cout << endl;

}

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool esPrimo(int n)
{
    int limite = sqrt(n);
    if(!n%2 && n != 2)
        return 1;
    for(int i=2; i<=limite; i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int main()
{
    int k;

    vector <int> primos;

    primos.push_back(2);
    primos.push_back(3);

    for(int i=4; i<11000; i++)
        if(esPrimo(i))
            primos.push_back(i);

    vector <pair<int, int> > divisores;

    for(int i=0; i<10; i++)
    {
        cin >> k;
        ///Encontramos los divisores de k

        for(int j=0; primos[j] <= k; j++)
        {
            while(k%primos[j] == 0)
            {
                bool existe = 0;
                for(int m=0; m<divisores.size() && !existe; m++)
                    if(primos[j] == divisores[m].first)
                    {
                        existe = 1;
                        divisores[m].second++;
                    }
                if(!existe)
                    divisores.push_back(make_pair(primos[j], 1));
                k/=primos[j];
            }
        }
    }

    int cantDiv = 1;
    for(int i=0; i<divisores.size(); i++)
    {
        cantDiv *= (divisores[i].second+1);
    }

    cout << cantDiv%10;

    return 0;
}
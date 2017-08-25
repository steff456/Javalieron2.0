#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tam;
    cin>>tam;
    int v[tam];
    for(int i=0; i<tam; i++)
    {
        cin>>v[i];
    }
    sort(v,v+tam);
    int rta=1;
    int anterior= 1;
    for(int i=0; i<tam; i++)
    {
        anterior = v[tam-i-1]*anterior;
        rta+=anterior;
        cout<<rta<<'\n';
    }
    cout<<rta;
}

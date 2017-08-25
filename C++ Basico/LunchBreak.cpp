#include <iostream>
using namespace std;

bool shortest_path(int a, int b, int c)
{
    return a<=b && a<=c;
}

int main()
{
    int T; //numero de casos de prueba
    cin>>T; //leo y guardo en T
    int a,b,c;
    while(T-->0)
    {
        cin>>a>>b>>c; //guardo lo que leo en a,b y c
        if(shortest_path(a,b,c))
        {
            cout<<"First"<<'\n';
        }
        else if(shortest_path(b,a,c))
        {
            cout<<"Second"<<'\n';
        }
        else cout<<"Third"<<'\n';
    }

}

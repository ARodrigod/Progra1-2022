#include<iostream>
using namespace std;
//arbol de 1 hasta N
void main()
{
    int n;
    cout <<"Ingresa el numero: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout <<" "<<endl;
    }
}

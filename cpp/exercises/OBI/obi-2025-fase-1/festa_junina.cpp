#include <iostream>
using namespace std;
int main()
{
    int E, L, S, x, y, z, resultado;
    cin >> E >> L >> S;
    x = abs(E-L);
    y = abs(L-S);
    z = abs(S-E);
    resultado = x+y+z;
    cout << resultado;
   
}

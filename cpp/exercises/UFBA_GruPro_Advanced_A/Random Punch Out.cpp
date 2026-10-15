#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, h;
    cin >> n >> h;
    
    vector<long long> lifes(n);
    
    for (long long i = 0; i< n; i++) {
        cin >> lifes[i];
    }
    
    long long left = 0, soma = 0, resultado = 0;
    
    for (long long right = 0; right<n; right++) {
        soma += lifes[right];
        
        while (soma > h) {
            soma -= lifes[left];
            left ++;
        }
        
        resultado = max(resultado, right - left + 1);
    }
    
    cout << resultado;
}

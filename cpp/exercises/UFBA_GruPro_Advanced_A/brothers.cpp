#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    unordered_map <long long, long long> pos;
    pos[0] = 0;
    long long prefix = 0;
    
    for (long long i=1; i<=N; i++) {
        long long leitura;
        cin >> leitura;
        
        if (i%2 == 1) {
            leitura = leitura * -1;
        }
        
        prefix += leitura;
        
        if (pos.count(prefix)) {
            long long right = i;
            long long left = pos[prefix] + 1;
            cout << left << " " << right;
            return 0;
        }
        
        pos[prefix] = i;
    }
    
    cout << "-1";
}

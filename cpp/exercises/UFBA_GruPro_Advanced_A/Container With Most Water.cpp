#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> tamanho(n);
    
    for (int i = 0; i<n; i++) {
        cin >> tamanho[i];
    }
    
    int left = 0, right = n-1;
    long long maxarea = 0;

    
    while (left < right) {
        long long altura = min(tamanho[left], tamanho[right]);
        long long largura = right - left;
        
        long long area = altura * largura;
        maxarea = max(maxarea, area);
        
        if (tamanho[left] < tamanho[right]) {
            left ++;
        } else {
            right --;
        }
    }
    
    cout << maxarea;
}

#include <bits/stdc++.h>
using namespace std;


bool ok(long long valor, const vector<long long>& frag, long long k) {
    long long meio = frag.size()/2;
    long long custo = 0;
    
    for (int i = 0; i<=meio; i++) {
        if (frag[i] > valor){
            custo += frag[i] - valor;
        }
    }
    
    if (custo > k) {
        return false;
    }
    
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, k;
    cin >> n >> k;
    
    vector<long long> frag(n);
    
    for (int i = 0; i<n; i++) {
        cin >> frag[i];
    }
    
    sort(frag.begin(), frag.end());
    
    long long meio = frag.size()/2;
    long long left = frag[meio] - k;
    long long right = frag[meio];
    
    while (left != right) {
        long long mid = left + (right - left)/2;
        
        if (ok(mid, frag, k)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    cout << left;
}

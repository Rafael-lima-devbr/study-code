#include <bits/stdc++.h>
using namespace std;

bool ok (long long mid, long long N, long long M, long long K) {
    long long esquerda = K - 1;
    long long direita = N - K;
    
    long long L = mid/2;
    long long R = mid - L;
    
    if (mid == 0) {
        return true;
    }

    if (L>esquerda) {
        L = esquerda;
        R = mid - L;
    }
    
    if (R>direita) {
        R = direita;
        L = mid - R;
    }
    
    long long dias = L + R + max(L,R) - 1;
    
    if (dias <= M) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, M, K;
    cin >> N >> M >> K;
    
    long long left =  0;
    long long right = N-1;
    
    while (left<right) {
        long long mid = left + (right-left+1)/2;
        
        if (ok(mid, N, M, K)) {
            left = mid;
        } else {
            right = mid -1;
        }
    }
    
    cout << left + 1 << '\n';
    
    
}

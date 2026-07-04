#include <iostream>
using namespace std;

int main() {
    int N,M, consumido = 0, total, P, G, C;
    cin >> N >> M;
    for(int i = 0; i<N; i++) {
        cin >> P >> G >> C;
        consumido += P*4 + G*9 + C*4;
    }
    total = M - consumido;
    cout << total;
}

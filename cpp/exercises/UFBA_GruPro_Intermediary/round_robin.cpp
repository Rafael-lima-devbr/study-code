#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N=0, M=0, total;
    cin >> N >> M;
    queue <int> fila;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        fila.push(x);
    }
    
    while (M>0 && !fila.empty()) {
        int subs;
        subs = fila.front() - 1;
        if(subs == 0) {
            fila.pop();
        } else {
            fila.pop();
            fila.push(subs);
        }
        M -= 1;
    }
    
    if (fila.empty()) {
        cout << "pronto";
    } else {
    cout << fila.size() << "\n";
    total = fila.size();
    for(int i = 0; i<total; i++) {
        cout << fila.front();
        if (i<total -1) cout << " ";
        fila.pop();
    }
  }
    

}

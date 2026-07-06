#include <iostream>
#include <stack>
using namespace std;
int main() {
int M, N, pontos = 0;

cin >> N >> M;
stack <int> blocos;

for (int i = 0; i <N; i++) {
    int atual, resultado;
    cin >> atual;
    
    if (blocos.empty()) {
        blocos.push(atual);
        
        if (blocos.size() >= M) {
            cout << "game over";
            return 0;
    }
        continue;
    }
    
    resultado = atual + blocos.top();
    if (resultado == 111) {
        blocos.pop();
        pontos += 10;
    } else {
        blocos.push(atual);
    }
    if (blocos.size() >= M) {
        cout << "game over";
        return 0;
    }
}
cout << pontos;

}

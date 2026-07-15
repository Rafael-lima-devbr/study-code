#include <iostream>
#include <queue>
using namespace std;

struct menor {
    bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
        return a.first > b.first;
    }
};

int main() {
    int N, G, S, M;
    priority_queue <pair<int, string>> grifinoria;
    priority_queue <pair<int, string>, vector<pair<int, string>>, menor> sonserina;
    cin >> N;
    for (int i = 0; i<N; i++) {
        cin >> G >> S >> M;
        for (int j=0; j<G; j++) {
            string nome;
            int nivel;
            cin >> nivel;
            getline(cin >> ws,nome);
            grifinoria.push({nivel, nome});
        }
        for (int k=0; k<S; k++) {
            string nome;
            int nivel;
            cin >> nivel;
            getline(cin >> ws,nome);
            sonserina.push({nivel, nome});
        }
        for (int l=0; l<M; l++) {
            if (!grifinoria.empty() && !sonserina.empty()) {
            if (i==N-1 && l==M-1)  {
            cout << grifinoria.top().second << " e " << sonserina.top().second;
            } else {
            cout << grifinoria.top().second << " e " << sonserina.top().second << "\n";
            }
            grifinoria.pop();
            sonserina.pop();
            }
        }
    }
}

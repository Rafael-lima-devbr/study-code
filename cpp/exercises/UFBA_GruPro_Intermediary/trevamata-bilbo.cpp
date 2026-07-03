#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

struct amigo {
    string nome;
    int peso;
};

int main() {
    int N;
    cin >> N;
    vector<amigo> a;
    vector<string> g;
    amigo amg;
    int peso_max;
    for (int i = 0; i<N; i++) {
        cin >> amg.nome >> amg.peso;
        a.push_back(amg);
    }
    cin >> peso_max;
    for (int i =0; i<N; i++) {
        if (a[i].peso>peso_max) g.push_back(a[i].nome);
    }
    if (g.empty()) cout << "Vamos todos encontrar a montanha!";
    else {
        cout << "Vamos virar almoço de aranhas gigantes!" << "\n";
        for (int i = 0; i < g.size(); i++) {
            cout << g[i] << "\n";
        }
    }
}

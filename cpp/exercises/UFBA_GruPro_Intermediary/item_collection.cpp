#include <iostream>
#include <map>
using namespace std;

int main() {
    int  N, M;
    map <string, int> mochila;
    cin >> N;
    for(int i =0; i<N; i++) {
        cin >> M;
        for(int j = 0; j<M; j++) {
            string nome;
            int quantidade;
            cin >> nome >> quantidade;
            mochila[nome] += quantidade;
        }
    }
    map<string, int> requisitos;
    requisitos["Potion"] = 10;
    requisitos["PokeBall"] = 20;
    requisitos["Revive"] = 5;
    requisitos["FullHeal"] = 3;
    requisitos["Ether"] = 2;
    
    bool concluida = true;
    int count = 0;
    map <string, int> falta;
    for (auto item : requisitos) {
        string nome = item.first;
        int requisitos = item.second;
        if(mochila[nome] < requisitos){
            concluida = false;
            count++;
            falta[nome] = requisitos - mochila[nome];
        }
    }
    
    if (concluida) {
        cout << "LIGA CONCLUIDA";
    } else {
        for (auto item : falta) {
            string nome = item.first;
            int faltando = item.second;
            if (count==1) {
                cout << nome << ": " << faltando;
            } else cout << nome << ": " << faltando << "\n";
            count--;
        }
    }
}

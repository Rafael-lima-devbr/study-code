#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

struct candidato {
	int nota;
	int id;
};

bool cmp (candidato i, candidato j) {
	return (i.nota > j.nota || i.nota == j.nota && i.id < j.id);
};


int main() {
	int N, Q, C;
	cin >> N >> Q;
	vector <candidato> candidatos;
	for (int i = 0; i<Q; i++) {
		candidato c;
		cin >> c.nota >> c.id;
		candidatos.push_back(c);
	}
	sort(candidatos.begin(), candidatos.end(), cmp);
	set <pair<int, int>> selecionados;

	for (int i =0; i<N; i++) {
		selecionados.insert({candidatos[i].nota, candidatos[i].id});
	}

	cin >> C;
	for (int i = 0; i<C; i++) {
		int nota, id;
		cin >> nota >> id;
		if (selecionados.count({nota, id})) {
			cout << "Sim\n";
		} else {
			cout << "Não\n";
		}
	}
}

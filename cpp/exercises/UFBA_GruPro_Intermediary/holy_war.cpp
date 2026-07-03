#include <iostream>
#include <queue>

using namespace std;

int main() {

	int N, E, dano, vida;
	cin >> N;
	queue <int> cavaleiros;
	for (int i = 0; i<N; i++) {
		int x;
		cin >> x;
		cavaleiros.push(x);
	}
	cin >> E;
	queue <int> espectros;
	for (int i = 0; i<E; i++) {
		int x;
		cin >> x;
		espectros.push(x);
	}

	while (!espectros.empty()) {
		vida = espectros.front();
		while (vida > 0) {
			if (cavaleiros.front() == 1) {
				vida -= 10;
				if (vida <= 0) cout << "1"; else cout << "1 ";
				cavaleiros.pop();
				cavaleiros.push(1);
			} else if (cavaleiros.front() == 2) {
				vida -= 50;
				if (vida <= 0) cout << "2"; else cout << "2 ";
				cavaleiros.pop();
				cavaleiros.push(2);
			} else {
				vida -= 250;
				if (vida <= 0) cout << "3"; else cout << "3 ";
				cavaleiros.pop();
				cavaleiros.push(3);
			}
		}
	    cout << "\n";
	    espectros.pop();
	}
}

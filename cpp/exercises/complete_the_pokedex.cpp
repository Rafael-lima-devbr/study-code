#include <iostream>
#include <set>
using namespace std;

int main () {
	int N, M;
	cin >> N;
	set <int> pegos;
	for (int i = 0; i<N; i++) {
		int x;
		cin >> x;
		pegos.insert(x);
	}
	cin >> M;
	for(int i =0; i<M; i++) {
		int ash;
		cin >> ash;
		if (pegos.count(ash)) {
			cout << "Repetido\n";
		} else {
			cout << "Temos que pegar!\n";
			pegos.insert(ash);
		}
	}
}

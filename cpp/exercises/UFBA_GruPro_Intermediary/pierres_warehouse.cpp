#include <iostream>
#include <queue>
using namespace std;

int main() {
	int D, X, N;
	cin >> D >> X;
	priority_queue <pair<int,string>> fila;

	for(int i =0; i<D; i++) {
	    cin>> N;
		for(int j = 0; j<N; j++) {
			string nome;
			int idade;
			cin >> nome >> idade;
			fila.push({idade, nome});
		}
		for (int j = 0; j<X; j++) {
			cout << fila.top().second << "\n";
			fila.pop();
		}
	}
}

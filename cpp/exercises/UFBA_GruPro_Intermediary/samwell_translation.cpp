#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main () {
	int N, M;
	map<string, string> dicionario;
	pair<string, string> par;
	cin >> N;

	for (int i=0; i<N; i++) {
		cin >> par.first >> par.second;
		dicionario.insert(par);
	}
	cin >> M;
	for(int i=0; i<M; i++) {
		string x;
		cin >> x;
		if (dicionario.count(x)) {
			cout << dicionario[x];
		} else {
			cout << x;
		}
		if (i!=M-1) {
			cout << " ";
		}
	}

}

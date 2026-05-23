#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	int M, A, N, total = 0;
	cin >> N;
	vector<pair<int, int>> missoes (N);
	
	for (int i = 0; i<N; i++) {
		int X;
		cin >> X;
		missoes[i].first = X;
	}
	for (int i = 0; i<N; i++) {
		int B;
		cin >> B;
		missoes[i].second = B;
	}
	cin >> M >> A;
	
	for (int i =0; i<N; i++) {
	    total+=missoes[i].first*(missoes[i].second+A);
	}
	
	if(total>=M) cout << "Upou de Nivel!";
	else cout << "Nao foi dessa vez!";
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N = 0, H = 0, contador = 0;
	cin >> N;
	vector<int> lista(N);
	for (int i = 0; i<N; i++) {
		cin >> lista[i];
		H = max(H, lista[i]);
	}
	contador = H;
	int mat[N][H];

	for (int i = 0; i<H; i++) {
		for (int j = 0; j<N; j++) {
			if (lista[j] < contador) {
				mat[j][i] = 0;
			} else {
				mat[j][i] = 1;
			}
		}
		contador -= 1;
	}

	for (int i= 0; i<H; i++) {
		for (int j=0; j<N; j++) {
			cout << mat[j][i];
			if (j < N -1) cout << " ";
		}
		cout << "\n";
	}
}

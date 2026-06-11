#include <iostream>
#include <set>
using namespace std;

int main() {
	int tamanho;
	cin >> tamanho;
	set <int> bolas;

	for(int i =0; i<tamanho; i++) {
		int bola;
		cin >> bola;
		bolas.insert(bola);
	}

	int total = bolas.size();
	if(total == tamanho) {
		cout << "Sortudo, ganhou os dois potes";
	} else if (total==(tamanho/2)) {
		cout << "Azarado";
	} else {
		cout << "Ganhou um pote";
	}
}

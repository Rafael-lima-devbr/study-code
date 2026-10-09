#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int lojas;
	cin >> lojas;
	
	vector<int> precos(lojas);
	
	for (int i = 0; i<lojas; i++) {
        cin >> precos[i];
	}
	
	sort(precos.begin(), precos.end());
	
	int dias;
	cin >> dias;
	
	for (int i = 0; i<dias; i++) {
	    int valor;
	    cin >> valor;
	    int total = upper_bound(precos.begin(), precos.end(), valor) - precos.begin();
	    
	    if (i==dias-1) {
	        cout << total;
	    } else {
	        cout << total << "\n";
	    }
	}


}

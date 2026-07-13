#include <iostream>
#include <set>
#include <stack>
using namespace std;

int main() {
	int N, X, Y, area = 0;
	set<pair<int, int>> coordenadas;
	stack <pair<int, int>> caminho;
	cin >> N;
	int mat[N][N];

	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++) {
			int x;
			cin >> x;
			mat[i][j] = x;
		}
	}
	cin >> Y >> X;

	if (mat[Y][X] == 1) {
		coordenadas.insert({Y,X});
		caminho.push({Y,X});
	}

	while(!caminho.empty()) {
	    Y = caminho.top().first;
	    X = caminho.top().second;
	    caminho.pop();
	    
		if (Y != N-1) if (mat[Y+1][X] == 1) if (coordenadas.insert({Y+1,X}).second) caminho.push({Y+1,X});
			
		if (Y != 0) if (mat[Y-1][X] == 1) if (coordenadas.insert({Y-1,X}).second) caminho.push({Y-1,X});
			
		if (X != N-1) if (mat[Y][X+1] == 1) if (coordenadas.insert({Y,X+1}).second) caminho.push({Y,X+1});
		  
		if (X != 0) if (mat[Y][X-1] == 1) if (coordenadas.insert({Y,X-1}).second) caminho.push({Y,X-1});
		
	}
	area = coordenadas.size();
	cout << area;
}

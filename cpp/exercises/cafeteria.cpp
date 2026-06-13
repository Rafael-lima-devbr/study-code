#include <iostream>
using namespace std;

int main()
{
	int A,B, C, D, min_cafe, max_cafe;
	bool cafe = false;
	cin >> A >> B >> C >> D;
	min_cafe = C - B;
	max_cafe = C - A;
	for (int i = min_cafe; i<=max_cafe; i++) {
		if(i%D == 0) {
			cafe = true;
		}
	}
	if (cafe == true) {
		cout << "S";
	} else {
		cout << "N";
	}
}

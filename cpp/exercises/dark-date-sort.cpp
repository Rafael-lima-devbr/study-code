#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

struct Data {
    int dia, mes, ano;
};

bool cmp (Data i, Data j) {
    return (i.ano < j.ano || (i.ano == j.ano && i.mes < j.mes) || (i.ano == j.ano && i.mes == j.mes && i.dia < j.dia));
};

int main () {
    vector<Data> dt;
    Data data;
    
    while (cin >> data.dia >> data.mes >> data.ano) {
        dt.push_back(data);
    }
    
    sort(dt.begin(), dt.end(), cmp);
    
    for (int i= 0; i<dt.size(); i++) {
        cout << dt[i].dia << " " << dt[i].mes << " " << dt[i].ano << "\n";
    }
}

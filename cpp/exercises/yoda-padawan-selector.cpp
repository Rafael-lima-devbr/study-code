#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int Qnt_Jedis;
   cin >> Qnt_Jedis ;
   vector<pair<string, int>> jedis (Qnt_Jedis);
   
  for (int i = 0; i < Qnt_Jedis; i++) {
      string nome;
      int Missao_total, Missao_Nao_feita;
      cin >> nome >> Missao_total >> Missao_Nao_feita;
      jedis [i] = {nome, Missao_total - Missao_Nao_feita};
  }
  
  sort(jedis.begin(), jedis.end());
  
  for(pair<string, int> j : jedis) {
      cout << j.first << " " << j.second << "\n";
  }
}

#include <iostream>
#include <string>
#include <algorithm> // sort, funções de max e min
#include <vector>
#include <utility> // pair
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>
#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _

  string joia;
  set<string> tesouro;

  while(cin >> joia) {

    tesouro.insert(joia);

  }

  cout << tesouro.size() << endl;

  return 0;
}
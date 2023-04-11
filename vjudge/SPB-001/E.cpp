#include <iostream>
#include <vector>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int, int>
#define piii pair<int, pii>
#define psi pair<string, int>
#define pis pair<int, string>
#define pll pair<long long, long long>
#define all(x) x.begin(),x.end()
#define revAll(x) x.rbegin(),x.rend()
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define loop(t) int t; cin >> t; while(t--)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define seev(v,n) for(int i = 0; i < n; i++){int x; cin >> x; v.push_back(x);}
#define sees(s,n) for(int i = 0; i < n; i++){int x; cin >> x; s.insert(x);}
#define MAX 10005
#define MOD 1000000007
typedef long long ll;
ll ct = 0;

int main() {
  int n, m, k, i = 0, j = 0, ct = 0;
  cin >> n >> m >> k;
  vector<int> v, x;
  seev(v, n);
  for(int i = 0; i < m; i++) {
    int t;
    cin >> t;
    x.push_back(t);
  }

  sort(all(v));
  sort(all(x));

  while(i < n and j < m) {
    if(abs(v[i] - x[j]) <= k) {
      i++, j++;
      ++ct;
    }
    else if(v[i] < x[j]){
      i++;
    }
    else {
      j++;
    }
  }

  cout << ct;
  return 0;
}
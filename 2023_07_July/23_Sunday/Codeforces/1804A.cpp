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

void solve() {
  int a, b;
  cin >> a >> b;
  if(abs(a) == abs(b)) {
    cout << 2 * abs(a) << '\n';
    return;
  }

  a = abs(a);
  b = abs(b);
  cout << 2 * (max(a, b)) - 1 << '\n';
}

int main() {
  int tc;
  cin >> tc;
  while(tc--) solve();
  return 0;
}
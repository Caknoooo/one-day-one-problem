#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
#define flash                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define ll long long
#define ndl "\n"
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define mod1 998244353
#define INF (ll)2e18
#define pll pair<ll, ll>
#define f first
#define s second
#define sz(x) (ll) x.size()

void solve()
{
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (auto &x : a)
    cin >> x;
  if (n % 2 == 0)
  {
    cout << 2 << ndl << 1 << " " << n << ndl << 1 << " " << n << ndl;
  }
  else
  {
    cout << 4 << ndl << 1 << " " << n << ndl << 2 << " " << n << ndl << 1 << " " << 2 << ndl << 1 << " " << 2 << ndl;
  }
}

int main()
{

  flash int tc = 1;
  cin >> tc;
  for (int i = 1; i <= tc; i++)
  {
    solve();
  }
  return 0;
}
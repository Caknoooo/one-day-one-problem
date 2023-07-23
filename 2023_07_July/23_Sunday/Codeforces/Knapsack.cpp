#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define INF 2000000000
#define endl '\n'

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int w, n;
  cin >> w >> n;

  vector<int> v(n + 1);
  vector<vi> dp(n + 1, vi(w + 1));
  // vector<vi> dp(n + 1, vi(w + 1, -INF));

  for (int i = 1; i <= n; ++i)
  {
    cin >> v[i];
  }
  // for(int j = 0; j <= w; ++j){
  // 	dp[0][j] = 0;
  // }
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 0; j <= w; ++j)
    {
      int skip = dp[i - 1][j];
      int pick = 0;

      if (j > 0)
      {
        pick = dp[i - 1][j - 1] + v[i];
      }
      // cout << "i : " << i << "  j : " << j << endl;
      // cout << "skip : " << skip << "  pick : " << pick << endl << endl;
      dp[i][j] = max(skip, pick);
    }
  }
  cout << dp[n][w] << endl;
  return 0;
}
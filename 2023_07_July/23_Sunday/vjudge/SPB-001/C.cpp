#include <iostream>

using namespace std;

void solve(){
  int n, x;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x;
  }
  cout << ((10 - n) * (10 - n - 1) * 3) << '\n';
}

int main(){
  int tc;
  cin >> tc;
  while (tc-- > 0) {
    solve();
  }
  
}
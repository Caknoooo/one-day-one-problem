#include <iostream>
#include <map>

using namespace std;

void solve() {
  int n;
  int x;
  cin >> n >> x;
  string str, newStr1, newStr2;
  cin >> str;

  for(int i = 0; i < n; i++) {
    if(str[i] - '0' >= x) {
      cout << str[i];
    }
    else {
      cout << x;
      for(int j = i; j < n; j++){
        cout << str[j];
      }
      cout << '\n'; 
      return;
    }
  }

  cout << x << '\n';
}

int main() {
 int tc;
 cin >> tc;

 while(tc--) {
  solve();
 } 
}
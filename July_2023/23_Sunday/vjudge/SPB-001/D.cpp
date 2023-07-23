#include <iostream>
#include <set>

using namespace std;

int main(){
  set<int> st;

  int n;
  scanf("%d", &n);
  for(int i = 0; i < n - 1; i++) {
    int x;
    scanf("%d", &x);
    st.insert(x);
  }

  for(int i = 1; i <= n; i++) {
    if(!st.count(i)){
      printf("%d\n", i);
      break;
    }
  }
}
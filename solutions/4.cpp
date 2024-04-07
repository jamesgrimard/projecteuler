//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;
  
int main() {
	
  int mx = 0;  


  for (int i=999;i>=100;i--) {
    for (int j=999;j>=100;j--) {
      int p = i * j;
      string s = to_string(p);
      int n = s.size();
      bool f = 1;
      for (int k=0;k<n/2;k++) {
        if (s[k] != s[n-1-k]) f = 0;
      }
      if (f == 1) mx = max(mx,p);
    }
  }

  cout << mx << '\n';



	return 0;
}
//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;
  
int main() {
	

  long long x = 1;
  vector<int> a(21);
  for (int i=20;i>1;i--) {
    int n = i;
    for (int j=2;j*j<=i;j++) {
      int cnt = 0;
      while (n % j == 0) {
        cnt++;
        n/=j;
      }
      a[j] = max(a[j],cnt);
    }
    a[n] = max(a[n],1);
  }
  for (int i=0;i<=20;i++) if (a[i]) x *= pow(i,a[i]);
  
  for (int i=0;i<=20;i++) cout << a[i] << " ";
  cout << '\n';

  cout << x << '\n';
    
    




	return 0;
}
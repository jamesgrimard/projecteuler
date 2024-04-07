//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;

    
int main() {

  int a[1001];
  for (int i=1;i<=1000;i++) a[i] = i * i;

  for (int i=1000;i>=3;i--) {
    for (int j=i-1;j>=2;j--) {
      for (int k=j-1;k>=1;k--) {
        if (i + j + k == 1000 && a[j] + a[k] == a[i]) cout << i * j * k << '\n';
      }
    }
  }       
    
      
    

  




	return 0;
}
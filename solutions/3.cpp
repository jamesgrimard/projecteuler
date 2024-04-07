//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;
  
int main() {
	

  long long k = 600851475143;
  
  long long mx;

  for (long long i=2;i*i<=k;i++) {
    if (k % i == 0) {
      while (k % i == 0) k /= i;
      mx = k;
    }
  }

  cout << mx << '\n';




	return 0;
}
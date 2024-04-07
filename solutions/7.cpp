//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;


bool _isprime(int x) {
  if (x == 2) return 1;
  for (int i=2;i*i<=x;i++) if (x % i == 0) return 0;
  return 1;
}
  
int main() {
	
  int i = 1 , cnt = 0;

  while (cnt < 10001) {
    i++;
    if (_isprime(i)) cnt++;
  }

  cout << i << '\n';

      


	return 0;
}
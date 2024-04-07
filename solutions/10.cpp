//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;
  

bool _isprime(int x) {
  if (x <= 3) return 1;
  for (int i=2;i*i<=x;i++) if (x % i == 0) return 0;
  return 1;
}


int main() {
	

 
  long long sum = 0;

  for (int i=2;i<2000000;i++) if (_isprime(i)) sum += i;

  cout << sum;



	return 0;
}
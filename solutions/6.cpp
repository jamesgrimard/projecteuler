//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;


long long qs(int n) {
	return (n*(n+1)*(2*n+1)) / 6;
}

long long sq(int n) {
	return ((1+n)*n / 2) * ((1+n)*n / 2);
}



int main() {
	
	long long sum_squared;
	long long squared_sum;

	cout << sq(100) - qs(100);




	return 0;
}
//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;

void _evensumsfib(int prev, int _prev, long long &sum) {
	if (prev > 4e6) return;
	if ((prev + _prev) % 2 == 0) sum += (prev+_prev);
	_evensumsfib(prev+_prev,prev,sum);
}


int main() {
	
	long long sum = 0;
	_evensumsfib(1,0,sum);
	cout << sum << '\n';
	


	return 0;
}
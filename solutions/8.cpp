//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;

    
int main() {
	
  
  ifstream file("input.txt");

  string s , S = ""; 
  while (getline(file,s)) S += s;
  
  file.close();
  
  int n = S.size();
  
  long long sum = 1 , cur = 1;

  for (int i=12;i<n;i++) {
    long long cur = 1;                   
    for (int j=i;j>=i-12;j--) cur *= (long long)(S[j]-'0');
    sum = max(sum,cur);  
  }
  cout << sum << '\n';
      
    

  




	return 0;
}
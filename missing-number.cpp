#include<bits/stdc++.h> 
using namespace std; 

int main() {
	long long n;
	long long temp; 
	long long sum = 0; 
	cin >> n;
	for(int i = 1; i < n; i++) {
		cin >> temp;
		sum += temp;
	}
	cout << (n*(n+1)/2) - sum;
	return 0;
}
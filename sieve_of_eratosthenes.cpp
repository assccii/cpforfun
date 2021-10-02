#include <bits/stdc++.h>
using namespace std;
vector<bool> isPrime(100001, true);

void sieveOfEratosthenes(int n) {
	 isPrime.resize(n+1, true);
	for(int i = 2; i*i <= n; i++) {
		if(isPrime[i])
			for(int j = i*i; j <= n; j += i) {
				isPrime[j] = false;
			}
	}
}

int main() {
	sieveOfEratosthenes(100000);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, k;
		cin >> n >> k;
		for(int i = n; i <= k; i++) {
			if(isPrime[i]) {
				cout << i << " ";
			}
		}
	}
	return 0;
}
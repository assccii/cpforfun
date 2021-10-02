#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	cin >> k;
	map<string, int> mp;
	string s[1001];
	int m[1002];
	int mx = INT_MIN;
	for(int i = 0; i < k; i++) {
		cin >> s[i] >> m[i];
		mp[s[i]] += m[i];
	}	
	map<string, int> :: iterator it;
	for(it = mp.begin(); it != mp.end(); it++) {
		mx = max(mx, it->second);
	}
	map<string, int> ma;
	for(int i = 0; i < k; i++) {
		ma[s[i]] += m[i];
		if(mp[s[i]] == mx and ma[s[i]] >= mx) {
			cout << s[i] << '\n';
			break;
		}
	}
}
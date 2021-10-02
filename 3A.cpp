#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, e;
	cin >> s >> e;
	int count = 0;
	vector<string> v;
	while(s[0] != e[0] or s[1] != e[1]) {
		string ans = "";
		if(s[0] < e[0]) {
			ans += "R";
			s[0]++;
		}else if(s[0] > e[0]) {
			ans += "L";
			s[0]--;
		}
		if(s[1] < e[1]) {
			ans += "U";
			s[1]++;
		}else if(s[1] > e[1]) {
			ans += "D";
			s[1]--;
		}
		count++;
		v.push_back(ans);
	}
	cout << count << '\n';
	for(auto i : v) {
		cout << i << '\n';
	}
}
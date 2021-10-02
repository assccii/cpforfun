#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	map<char, int> mp;
	for(int i = 0; i < (int)s.size(); i++) {
		mp[s[i]]++;
	}
	bool one = false, ok = true;
	string res = "";
	for(auto i : mp) {
		if(i.second % 2 == 0)
			continue;
		else {
			if(one == true) {
				ok = false;
				break;
			}
			one = true;
			res = i.first;
			i.second--;
		}
	}
	if(!ok) {
		cout << "NO SOLUTION\n";
		return 0;
	}
	string ans = "", temp;
	for(auto i : mp) {
		while(i.second >= 2) {
			ans += i.first;
			i.second -= 2;
		}
	}
	temp = ans;
	ans += res;
	reverse(temp.begin(), temp.end());
	ans += temp;
	cout << ans;
}
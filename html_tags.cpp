#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
		cin >> s;
		bool ok = true;
		ok &= (s[0] == '<');
		ok &= (s[1] == '/'); 
		bool entered = false;
		for(int i = 2; i < (int)s.size()-1; i++) {
			entered = true;
			if((s[i] >= 'a' and s[i] <= 'z') or (s[i]-'0' >= 0 and s[i]-'0' <= 9)) {
				continue;
			}else  {
				ok = false;
				break;
			}
		}
		ok &= (s[(int)s.size()-1] == '>');
		if(ok and entered) {
			cout << "success\n";
		}else cout << "error\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		solve();
	}
}
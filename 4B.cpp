#include <bits/stdc++.h>
using namespace std;
int main() {
	int d, time;
	cin >> d >> time;
	vector<pair<int, int>> v;
	int mi = 0, ma = 0;
	int x, y;
	for(int i = 0; i < d; i++) {
		cin >> x >> y;
		v.push_back({x,y});
		mi += x;
		ma += y;
	}
	if(time > ma or time < mi) {
		cout << "NO\n";
		return 0;
	}
	time -= mi;
	cout << "YES\n";
	for(int i = 0; i < d; i++) {
		int k = min(time, (v[i].second - v[i].first));
		v[i].first += k;
		time -= k;
		if(time <= 0) {
			break;
		}
	}
	for(auto i : v) 
		cout << i.first << " ";
}
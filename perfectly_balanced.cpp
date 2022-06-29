#include<bits/stdc++.h>
using namespace std;

#define ll long long

// perfectly balanced string

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	set<char> c;

	bool ok = true;
	int k;
	for(k=0; k<n; k++) {
		if(c.find(s[k]) == c.end())
			c.insert(s[k]);
		else 
			break;
	}

	for(int i=k; i<n; i++) {
		if(s[i] != s[i-k])
			ok = false;
	}
	ok ? cout << "YES\n" : cout << "NO\n";
}

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 

	int t=1; 
	cin >> t;
	for(int i=1; i<=t; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}


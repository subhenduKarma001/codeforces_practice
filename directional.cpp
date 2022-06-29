#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
// Directional Increase
 
void solve() {
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<ll> ps(n+1);
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		ps[i] = ps[i-1] + a[i];
	}
 
	if(ps[n] != 0) {
		cout << "no\n";
		return ;
	}
 
	bool ok = true;
	for(int i=1; i<=n; i++) {
		if(ps[i] < 0) 
			ok = false;
	}
 
	bool visited_zero = false;
	for(int i=1; i<=n; i++) {
		if(ps[i] == 0) 
			visited_zero = true;
		else if(visited_zero) 
			ok = false;
	}
 
	ok ? cout << "yes\n" : cout << "no\n";
}
 
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
 
	int t=1; 
	cin >> t;
	for(int i=1; i<=t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}
 
	return 0;
}

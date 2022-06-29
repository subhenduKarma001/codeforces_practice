#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
// Bit Flipping 
 
void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	vector<int> f(n, 0);
 
	int tempk = k;
	for(int i=0; i<n and tempk > 0; i++) {
		if(k % 2 == s[i] - '0') {
			f[i]++;
			tempk--;
		}
	}
 
	f[n-1] += tempk;
	for(int i=0; i<n; i++) {
		if((k - f[i]) % 2 == 1) {
			s[i] = '0' - (s[i] - '1');
		}
	}
	
	cout << s << endl;
	for(auto x : f) {
		cout << x << " ";
	}
	cout << endl;
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

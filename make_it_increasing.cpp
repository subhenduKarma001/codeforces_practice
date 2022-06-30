#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int32_t main() {

	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i=1; i<=n; i++) 
		cin >> a[i];

	ll ans = 1e18;
	for(int pos=1; pos<=n; pos++){
		ll prev=0, cnt=0;
		for(int i=pos-1; i>=1; i--) {
			prev += a[i] - prev % a[i];
			cnt += prev / a[i];
		}
		prev = 0;
		for(int i=pos+1; i<=n; i++) {
			prev += a[i] - prev % a[i];
			cnt += prev / a[i];
		}
		ans = min(ans, cnt);
	}
	cout << ans << endl;
}


#include <bits/stdc++.h>
using namespace std;

long long a[100001], mx = -99999999, n;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	for(int i = 1; i<=n; i++){
		cin >> a[i];
		if(a[i] + a[i-1] > a[i]) a[i] += a[i-1];
		mx = max(mx, a[i]);
	}
	
	cout << mx << endl;
	
}
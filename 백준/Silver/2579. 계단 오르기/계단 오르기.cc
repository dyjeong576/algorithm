#include <bits/stdc++.h>
using namespace std;

int dp[304], st[304];
int n, t;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> st[1] >> st[2] >> st[3]; 
	dp[3] = max(st[1] + st[3], st[2] + st[3]);
	dp[2] = st[1] + st[2];
	dp[1] = st[1];
	
	for(int i=4; i<=n; i++){
		cin >> st[i];
		dp[i] = max(dp[i-2] + st[i], dp[i-3] + st[i-1] + st[i]);
	}
	
	cout << dp[n] << endl;
	
	return 0;
	
}
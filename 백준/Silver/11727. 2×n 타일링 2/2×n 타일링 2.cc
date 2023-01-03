#include <bits/stdc++.h>
using namespace std;

long long dp[1004];
int n;
long long t;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	dp[1] = 1; dp[2] = 3;
	for(int i=3; i<=n; i++){
		dp[i] = dp[i-1] + 2* dp[i-2];
		dp[i] %= 10007;		
	}
	
	cout << dp[n] << endl;
	
	return 0;
	
}
#include <bits/stdc++.h>
using namespace std;

long long dp[1004][14],n, a[1004], sum;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	for(int i=0; i<10; i++) dp[1][i] = 1;
	for(int i=1; i<1004; i++)dp[i][0] = 1;
	
	cin >> n;
	
	for(int i=2; i<=n; i ++){
		for(int j=0; j<=9; j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
			dp[i][j] %= 10007;
		}
	}
	
	for(int i=0; i<=9; i++) sum += dp[n][i];
	sum %= 10007;
	cout << sum << endl;

}
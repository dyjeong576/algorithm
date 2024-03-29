#include <bits/stdc++.h>
using namespace std;

long long dp[104][14],n, sum;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	dp[1][0] = 0; 
	for(int i=1; i<10; i++) dp[1][i] = 1; //기저 사례
	
	for(int i=2; i<=n; i++){
		for(int j=0; j<=9; j++){
			if(j == 0)
				dp[i][0] = dp[i-1][j+1];
			else if(j == 9)
				dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
				dp[i][j] %= 1000000000;
		}
	} 
	
	for(int i=0; i<=9; i++) sum+= dp[n][i];
	sum %= 1000000000;
	
	cout << sum << endl;
	
	return 0;

}
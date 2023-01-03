#include <bits/stdc++.h>
using namespace std;

long long dp[104];
int n, t;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	dp[1] = 1; dp[2] = 1; dp[3] = 1; dp[4] = 2; dp[5] = 2;
	for(int i=6; i<101; i++){
		dp[i] = dp[i-1] + dp[i-5];
	}
	while(n--){
		cin >> t;
		cout << dp[t] << endl;
	}
	
	return 0;
	
}
#include <bits/stdc++.h>
using namespace std;

long long dp[12];
int n, t;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for(int i=4; i<=12; i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
	
	cin >> n;
	while(n--){
		cin >> t;
		cout << dp[t] << endl;
	}
	
	return 0;
	
}
#include <bits/stdc++.h>
using namespace std;

int dp[2][100004],n, a[2][100004], t;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;
	
	while(t--){
		
		cin >> n;
		
		for(int i=0; i<2; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		dp[0][0] = a[0][0]; dp[1][0] = a[1][0]; 
		dp[0][1] = dp[1][0] + a[0][1]; dp[1][1] = dp[0][0] + a[1][1];
		for(int i=2; i<n; i++){
			dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + a[0][i];
			dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + a[1][i];
		}
		
		cout << max(dp[0][n-1], dp[1][n-1]) << endl;
		
	}
	
	return 0;

}
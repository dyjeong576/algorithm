#include <bits/stdc++.h>
using namespace std;

 int dp[10004], tp, n, a[10004], mx;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
		
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		dp[i] = 1;
		for(int j=0; j<i; j++){
			if(a[i]<a[j]){
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
		mx = max(dp[i], mx);
	}
	
	cout << mx << endl;

}


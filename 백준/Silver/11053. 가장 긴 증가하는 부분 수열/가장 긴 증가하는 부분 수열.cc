#include <bits/stdc++.h>
using namespace std;

 int dp[10004], tp, n, a[10004], ret;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
		
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
		dp[i] = 1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ret = max(dp[i], ret);
	}
	
	cout << ret << endl;

}
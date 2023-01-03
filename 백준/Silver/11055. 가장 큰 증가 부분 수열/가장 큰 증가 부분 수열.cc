#include <bits/stdc++.h>
using namespace std;

 int dp[10004], tp, n, a[10004], sum;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
		
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		dp[i] = a[i];
		for(int j=0; j<i; j++){
			if(a[i]>a[j]){
				dp[i] = max(a[i] + dp[j], dp[i]);
			}
		}
		sum = max(dp[i], sum);
	}
	
	cout << sum << endl;

}
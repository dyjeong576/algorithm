#include <bits/stdc++.h>
using namespace std;

long long mx, k, n, ans;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> k >> n;
	vector<long long> v(k);
	
	for(int i=0; i<k; i++){
		cin >> v[i];
		mx = max(v[i], mx);
	}
	
	long long left=1, right=mx, mid=0;
	while(left <= right){
		mid = (left + right)/2;
		long long cnt = 0;
		for(int i=0; i<k; i++){
			if(v[i] > mid) cnt +=v[i]-mid;
		}
		if(cnt >= n){
			ans = max(mid, ans);
			left = mid+1;
		}
		else{
			right = mid-1;
		} 
	}
	
	cout << ans << endl;
	
	return 0;

}
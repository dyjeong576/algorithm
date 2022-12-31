#include <bits/stdc++.h>
using namespace std;

int n, m, l, r, t, ret, sum;
vector<int> v;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		cin >> t;
		v.push_back(t);
	}
	
	sum = v[0];
	while(r<n){
		if(sum<m){
			r++; sum += v[r];
		}
		else if(sum == m){
			ret++; r++;
			if(r<n) sum+= v[r]; 
		}
		else{
			sum -= v[l++];
			
		}
	}	
	
	cout << ret << endl;
		
	return 0;
	
}
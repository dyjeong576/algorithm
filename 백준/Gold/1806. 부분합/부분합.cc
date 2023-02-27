#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    long long n, s, start=0, end=0, len=987654321, sum;
    
    cin >> n >> s;
    
    vector<long long> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];
    
    sum = v[0]; len = n+1;
    while(start<=end && end<n){
    	if(sum < s){
    		sum += v[++end];
		}
		else{
			len=min(len, end-start+1);
			sum -= v[start++];
		}
	}
	if(len == n+1) len = 0;
	
	cout << len;
    
    return 0;
    
}
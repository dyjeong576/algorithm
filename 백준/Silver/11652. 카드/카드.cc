#include <bits/stdc++.h>
using namespace std;

long long n, t, ans, ret, mx;
vector<long long> v;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    cin >> n;
    
    while(n--){
    	cin >> t;
    	v.push_back(t);
	}
	
	sort(v.begin(), v.end());
	
	t = v[0];
	for(auto x : v){
		if(t == x) ret++;
		else{
			if(ret > mx){
				mx = ret;
				ans = t;
			}
			ret = 1;
			t = x;
		}
	}
	
	if(ret > mx) ans = t;
	
	cout << ans << endl;
	
	return 0;
    
}
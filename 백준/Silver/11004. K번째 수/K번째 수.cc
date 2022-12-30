#include <bits/stdc++.h>
using namespace std;

int n, f, t;
vector<int> v;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    cin >> n >> f;
    
    while(n--){
    	cin >> t;
    	v.push_back(t);
	}
	
	sort(v.begin(), v.end());
	cout << v[f-1] << endl;
	
	return 0;
    
}
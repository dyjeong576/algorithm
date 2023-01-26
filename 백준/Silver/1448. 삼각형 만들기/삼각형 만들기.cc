#include <bits/stdc++.h>
using namespace std;

int n, maxx;
string tmp;
map<string, int> m;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v.rbegin(), v.rend());
    
    for(int i=0; i<n-2; i++){
    	if(v[i] < v[i+1] + v[i+2]){
    		cout << v[i] + v[i+1] + v[i+2] << endl;
    		return 0;
		} 
	}
	
	cout << -1;
    return 0;
    
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int n;
    int t, c, time = 0;
    vector<pair<int, int>> v;
    
    cin >> n;
    
    for(int i = 0; i<n; i++){
    	cin >> t >> c;
    	v.push_back({t, c});
	}
	
	sort(v.begin(), v. end());
	for(auto x : v){
		if(time < x.first){
			time = x.first + x.second;
		}
		else{
			time += x.second;
		}
	}
	
	cout << time << endl;
	
	return 0;
    
}
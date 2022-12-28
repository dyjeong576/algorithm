#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    vector<pair<int, int>> v;
    int n, t, r, ret = 0;
    priority_queue<int, vector<int>, greater<int> > pq;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
    	cin >> t >> r;
    	v.push_back({t, r});
	}
	
	sort(v.begin(), v.end());
	
	for(auto x : v){
		pq.push(x.second);
		if(pq.size() > x.first) pq.pop();
	}
	
	while(pq.size()){
		ret += pq.top();
		pq.pop();
	}
    
    cout << ret << endl;
	
	return 0;
    
}
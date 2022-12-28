#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int n, p, d, ret=0;
    vector<pair<int, int>> v;
    priority_queue<int, vector<int>, greater<int>> pq; // 오름차순으로 가는 우선순위큐 
    
    cin >> n;
    
    for(int i=0; i<n; i++){
    	cin >> p >> d;
    	v.push_back({d, p});
	}
	sort(v.begin(), v.end());
	
	for(int i = 0; i<n; i++){
		pq.push(v[i].second);
		if(pq.size() > v[i].first)	pq.pop();
	}
	
	while(pq.size()){
		ret += pq.top();
		pq.pop();
	}
	cout << ret << endl;
	
	return 0;
    
}
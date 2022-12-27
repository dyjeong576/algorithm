#include <bits/stdc++.h>
using namespace std;

long long n, m, ret, idx;
priority_queue<long long> pq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    
    cin >> n >> m;
    
    vector<int> bag(m);
    vector<pair<int, int>> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
    for(int i = 0; i<m; i++) cin >> bag[i];
    
    sort(v.begin(), v.end()); sort(bag.begin(), bag.end());
    
    for(int i=0; i<m; i++){
    	//pq는 가방에 담을 수 있는 보석리스트 
    	while(idx<n && v[idx].first <= bag[i]) pq.push(v[idx++].second); //일단 가방에 담을 수 있는 보석들을 담는다. 
    	if(pq.size()){
    		ret += pq.top(); pq.pop(); // 그 중에서 가장 비싼 보석을 담고 보석리스트에서 제거한다. 
		}
	}
	
	cout << ret << endl;
    
    return 0;
    
}
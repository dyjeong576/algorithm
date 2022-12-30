#include <bits/stdc++.h>
using namespace std;

int n, m, tmp, ret;
priority_queue<int> pq;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	while(n--){
		cin >> tmp;
		pq.push(tmp);
	}
	
	while(m){
		if(pq.top() <= m){
            ret += m/pq.top();
            m = m%pq.top();
		}
		else pq.pop();
	}
	
	cout << ret << endl;

	
	return 0;
	
}
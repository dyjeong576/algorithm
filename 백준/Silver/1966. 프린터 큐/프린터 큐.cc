#include <bits/stdc++.h>
using namespace std;

int n, m, t, tmp, cnt;


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> t;
    
    while(t--){
    	cin >> n >> m;
    	queue<int> q;
    	priority_queue<int> pq;
    	cnt = 0;
    	for(int i=0; i<n; i++){
    		cin >> tmp;
    		q.push(tmp);
    		pq.push(tmp);
		}
		while(1){
			if(m<0) m = q.size() - 1;
			if(pq.top() != q.front()){
				 q.push(q.front()); q.pop();
			}
			else{
				cnt++;
				if(m == 0) break;
				pq.pop(); q.pop();
			}
			m--;
		}
		
		cout << cnt << endl;
        
	}
   
    return 0;
    
}
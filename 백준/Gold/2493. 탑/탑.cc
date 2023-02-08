#include <bits/stdc++.h>
using namespace std;

stack<pair<int, int>> q;
int n, t;


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n; 
    
    for(int i=1; i<=n; i++){
    	cin >> t;
		
		while(q.size()){
			if(q.top().first > t){
				cout << q.top().second << " ";
				break;
			}
			q.pop();
		}
			
		if(q.empty()) cout << 0 << " ";
		q.push({t, i});
	}
    
    return 0;
    
}
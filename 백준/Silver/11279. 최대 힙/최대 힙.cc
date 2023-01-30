#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;
int n, tmp;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    while(n--){
    	cin >> tmp;
    	if(tmp == 0) {
    		if(pq.size()) {
    			cout << pq.top(); pq.pop();
			}
    		else cout << 0;
    		cout << "\n";
		}
		else{
			pq.push(tmp);
		}
	}
    
    return 0;
    
}
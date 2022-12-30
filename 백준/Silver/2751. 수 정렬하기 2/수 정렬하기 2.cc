#include <bits/stdc++.h>
using namespace std;

int n, x;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    cin >> n;
    
    while(n--){
    	cin >> x;
    	pq.push(x);
	}
	
	while(pq.size()){
		cout << pq.top() << "\n";
		pq.pop();
	}

	return 0;
    
}
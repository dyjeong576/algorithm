#include <bits/stdc++.h>
using namespace std;

int n, t, sum;
priority_queue<int> p;
priority_queue<int, vector<int>, greater<int>> q;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	while(n--){
		cin >> t;
		if(t>0)p.push(t);
		else q.push(t);
	}
	
	while(p.size()){
		t = p.top(); p.pop();
		if(!p.empty() && t < t*p.top()){
			t = t*p.top();
			p.pop();
		}
		sum += t;
	}
	
	while(q.size()){
		t = q.top(); q.pop();
		if(!q.empty() && t < t*q.top()){
			t = t*q.top();
			q.pop();
		}
		sum += t;
	}
	
	cout << sum;
		
	return 0;
	
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	double n, num;
	priority_queue<double> pq;
	vector<double> v;
	cin >> n;
	
	while(n--){
		cin >> num;
		pq.push(num);
		if(pq.size() == 8) pq.pop();
	}
	
	while(pq.size()){
		v.push_back(pq.top());
		pq.pop();
	}
	reverse (v.begin(), v.end());
	
	cout << fixed;
	cout.precision(3);
	for(auto x : v){
		cout << x << endl;
	}
	
	return 0;
    
}
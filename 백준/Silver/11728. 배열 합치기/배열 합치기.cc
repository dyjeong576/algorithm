#include <bits/stdc++.h>
using namespace std;

int x, y, t;
vector<int> v;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> x >> y;
	
	while(x--){
		cin >> t;
		v.push_back(t);
	}
	while(y--){
		cin >> t;
		v.push_back(t);
	}
	
	sort(v.begin(), v.end());
	
	for(int n : v) cout << n << " ";
		
	return 0;
	
}
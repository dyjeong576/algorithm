#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> v;
int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    cin >> n;
    
    while(n--){
    	cin >> x >> y;
    	v.push_back({x, y});
	}
	
	sort(v.begin(), v.end());
	
	for(auto k : v){
		cout <<k.first << " "<< k.second << "\n";
	}

	return 0;
    
}
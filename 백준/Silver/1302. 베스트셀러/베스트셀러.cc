#include <bits/stdc++.h>
using namespace std;

int n, maxx;
string tmp;
map<string, int> m;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    while(n--){
    	cin >> tmp;
    	m[tmp]++;
	}
	
	for(auto x : m){
		if(x.second > maxx){
			maxx = x.second;
			tmp = x.first;
		} 
	}
	
	cout << tmp << endl;

    return 0;
    
}
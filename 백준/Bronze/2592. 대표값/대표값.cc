#include <bits/stdc++.h>
using namespace std;

map<int, int> m;
int sum, n, a, b;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    for(int i=0; i<10; i++){
    	cin >> n;
    	sum += n;
    	m[n]++;
	}
	
	for(auto x : m){
		if(x.second > b){
			a = x.first;
			b = x.second;
		}
	}
	
	cout << sum/10 << "\n" << a << endl;
    
    return 0;
    
}
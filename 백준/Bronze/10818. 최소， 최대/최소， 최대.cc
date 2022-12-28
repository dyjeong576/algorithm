#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int mx = -987654321, mn = 987654321, num, n;
    cin >> num;
    
    while(num--){
    	cin >> n;
    	mn = min(mn, n);
    	mx = max(mx, n);
	}
	
	cout << mn << " " << mx << endl;
    
	return 0;
    
}
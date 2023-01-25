#include <bits/stdc++.h>
using namespace std;

int n, x, ans;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    for(int i=0; i<5; i++){
    	cin >> x;
    	if(x == n) ans++;
    }
	
	cout << ans << endl;
	
    return 0;
    
}
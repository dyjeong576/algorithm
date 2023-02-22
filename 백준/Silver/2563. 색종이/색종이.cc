#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t, m, n, sum=0;
    int a[101][101] = {0};
    
    cin >> t;
    
    while(t--){
    	cin >> m >> n;
    	
    	for(int i=m; i<m+10; i++){
    		for(int j=n; j<n+10; j++){
    			if(i>100 || j>100) continue;
    			a[i][j] = 1;
			}
		}
	}
	
	for(int i=0; i<100; i++){
    	for(int j=0; j<100; j++){
    			sum += a[i][j];
		}
	}
	
	cout << sum << endl;
	
    return 0;
    
}
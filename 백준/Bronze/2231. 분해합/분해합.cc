#include <bits/stdc++.h>
using namespace std;

int n, sum, tmp;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    for(int i=1; i<=n; i++){
    	tmp = i;
    	sum = tmp;
    	while(tmp){
    		sum += tmp%10;
    		tmp /= 10;
		}
		if(sum == n){
			cout << i << endl;
			return 0;
		}
	}
	
	cout << 0 << endl;
	
    return 0;
    
}
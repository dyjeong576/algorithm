#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int n, tmp;
    
    cin >> n;
    
    for(int i=1; i<=n; i++){
    	if(i==n){
    		tmp = 2*i - 1;
    		while(tmp--){
    			cout << "*";
			}
			continue;
		}
		else if(i == 1){
			tmp = n - i;
			while(tmp--) cout << " ";
			cout <<"*";
		}
		else{
			tmp = n - i;
			while(tmp--) cout << " ";
			cout <<"*";
			tmp = 2*(i-1) - 1;
			while(tmp--) cout << " ";
			cout << "*";
		}
		cout << "\n";
		
	}
  
	return 0;
    
}
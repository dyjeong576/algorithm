#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int n, tmp;
    
    cin >> n;
    
    for(int i=1; i<=n; i++){
    	tmp = n-i;
    	while(tmp--) cout << " ";
		tmp = 2*i-1;
		for(int j=0; j<tmp; j++){
			if(j%2) cout << " ";
			else cout << "*";
		}
		cout << "\n";	
	}
  
	return 0;
    
}
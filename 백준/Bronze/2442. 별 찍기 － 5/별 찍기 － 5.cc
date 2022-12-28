#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int n, tmp;
    
    cin >> n;
    n = 2*n - 1;
    
    for(int i = 1; i<=n; i+=2){
    	tmp = (n-i)/2;
    	while(tmp--) cout << " ";
    	tmp = i;
    	while(tmp--) cout << "*";
    	cout << "\n";
	}
    
	return 0;
    
}
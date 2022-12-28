#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int n, tmp;
    
    cin >> n;
    for(int i = 0; i<n; i++){
    	tmp = i;
    	while(tmp--) cout << " ";
    	tmp = 2*(n-i)-1;
    	while(tmp--)cout << "*";
    	cout << "\n";	
    	
	}
	for(int i = n -2; i>=0; i--){
    	tmp = i;
    	while(tmp--) cout << " ";
    	tmp = 2*(n-i)-1;
    	while(tmp--)cout << "*";
    	cout << "\n";	
    	
	}
    
	return 0;
    
}
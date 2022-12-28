#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int n, x, tmp;
    
    cin >> n;
    x = n;
    
    for(int i=1; i<=n; i++){
    	tmp = n - i;
    	while(tmp--) cout << " ";
		tmp = i;
		while(tmp--)cout << "*";	
		cout << "\n";
	}
    
	return 0;
    
}
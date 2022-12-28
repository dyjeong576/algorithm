#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    string s;
    
    cin >> s;
    
    for(int i=0; i<s.length(); i++){
    	cout << s[i];
    	if((i+1)%10 == 0) cout << endl;
    	
	}
 
	return 0;
    
}
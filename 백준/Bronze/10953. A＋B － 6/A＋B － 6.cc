#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    int num, x, y;
    string s;
    
    cin >> num;
    
    while(num--){
    	cin >> s;
    	cout << s[0] + s[2] - '0'*2<< endl;
	}
   
	return 0;
    
}
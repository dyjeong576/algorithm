#include <bits/stdc++.h>
using namespace std;

string s;
int a, b, x, y;

int main(){
    
    while(getline(cin, s)){
    	a=0,b=0,x=0,y=0;
    	for(int i = 0; i<s.length(); i++){
    		if(s[i]>= '0' && s[i] <='9') x++;
    		if(s[i]>= 'a' && s[i] <='z') a++;
    		if(s[i]>= 'A' && s[i] <='Z') b++;
    		if(s[i] == ' ') y++;
		}
		cout << a << " " << b << " " << x << " " << y << "\n";
	}
	
	return 0;
    
}
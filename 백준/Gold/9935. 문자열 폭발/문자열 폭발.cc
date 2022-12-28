#include <bits/stdc++.h>
using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    string tmp = "", s, b;
    
    cin >> s >> b;
    
    for(auto c : s){
    	tmp += c;
    	if(tmp.length() >= b.length()){
    		if(tmp.substr(tmp.length() - b.length()) == b) tmp.erase(tmp.end() - b.size(), tmp.end());
		}
	}
	
	if(tmp == "") tmp = "FRULA";
	cout << tmp << endl;
    
	
	return 0;
    
}
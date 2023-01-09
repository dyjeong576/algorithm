#include <bits/stdc++.h>
using namespace std;

string s;
int a, b;
char tmp = 't';

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> s;
	
	for(auto c : s){
		if(tmp == 't'){
			 tmp = c; continue;
		}
		if(tmp != c){
			if(tmp == '1') a++;
			else b++;
			tmp = c;
		}
	}
	if(tmp == '1') a++;
	else b++;
	
	cout << min(a,b) << endl;
	
	return 0;
	
}
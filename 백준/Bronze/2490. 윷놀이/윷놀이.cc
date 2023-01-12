#include <bits/stdc++.h>
using namespace std;

string s;
int a, b;

int main(){
	
	while(getline(cin , s)){
		a =0; b=0;
		for(int i=0; i<7; i+=2){
			if(s[i] == '0') a++;
			else b++;
		}
		if(a == 1) cout << "A" << "\n";
		else if(a == 2) cout << "B" << "\n";
		else if(a == 3) cout << "C" << "\n";
		else if(a == 4) cout << "D" << "\n";
		else if(a == 0) cout << "E" << "\n";
		
	}
	
	return 0;
	
}
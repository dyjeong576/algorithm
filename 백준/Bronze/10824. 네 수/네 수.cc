#include <bits/stdc++.h>
using namespace std;

string a, b;
string n[4];

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    
    for(int i=0; i<4; i++) cin >> n[i];
    a = n[0] + n[1];
    b = n[2] + n[3];
    
    cout << stol(a) + stol(b) << endl;

	return 0;
    
}
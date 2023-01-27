#include <bits/stdc++.h>
using namespace std;

string s;
int a[26];
int x, cnt, t;
char ch;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> s;
    
    for(auto c : s){
    	if(c>='a'&&c<='z') a[c-'a']++;
    	else a[c-'A']++;
	}
	x = *max_element(a, a+26);
	
	for(int i=0; i<26; i++){
		if(a[i] == x) {
			cnt++;
			t = i;
		}
	}
	
	ch = t + 'A';
	
	if(cnt == 1) cout << ch << endl;
	else cout << "?" << endl;
    
    return 0;
    
}
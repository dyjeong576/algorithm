#include <bits/stdc++.h>
using namespace std;

string s;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> s;
	
	sort(s.rbegin(), s.rend());
	
	for(auto x : s) cout << x;

	return 0;
	
}
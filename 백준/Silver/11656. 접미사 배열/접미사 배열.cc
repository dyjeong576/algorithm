#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> v;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> s;
	v.push_back(s);
	
	while(s.length() != 1){
		v.push_back(s.substr(1));
		s = s.substr(1);
	}
	
	sort(v.begin(), v.end());
	
	for(string t : v){
		cout << t << "\n";
	}
	
	return 0;
	
}
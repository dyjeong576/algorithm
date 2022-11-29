#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> n(26,0);
	string s;
	
	cin >> s;
	
	for(char c : s){
		n[c - 'a']++;
	}
	
	for(int x : n){
		cout << x << " ";
	}
	
	return 0;
    
}
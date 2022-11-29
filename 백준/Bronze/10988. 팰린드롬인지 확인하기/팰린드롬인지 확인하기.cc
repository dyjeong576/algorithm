#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string s, s2;
	
	cin >> s;
	
	s2 = s;
	reverse(s2.begin(), s2.end());
	
	if(s == s2)	cout << "1";
	else cout << "0";
	
}
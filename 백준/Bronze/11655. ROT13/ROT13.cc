#include <iostream>

using namespace std;

int main()
{
	string s;
	
	getline(cin, s);
	
	for(char& c : s){
		if(c >= 'a'  && c<= 'z') c = (c - 'a' + 13)%26 + 'a';
		if(c >= 'A'  && c<= 'Z') c = (c - 'A' + 13)%26 + 'A';
	}
	 
	cout << s;
    
	return 0;
	
}
   
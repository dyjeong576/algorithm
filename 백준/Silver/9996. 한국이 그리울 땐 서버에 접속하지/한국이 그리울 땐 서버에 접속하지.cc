#include <iostream>

using namespace std;

int main()
{
	int num;
	string p ,a ,b, word;
	
	cin >> num >> p;
	a = p.substr(0,p.find("*"));
	b = p.substr(p.find("*")+1);
	while(num){
		
	cin >> word;
	if(a.length() + b.length() > word.length()) cout << "NE" << endl;
	else if(a != word.substr(0, a.length()) || b !=word.substr(word.length() - b.length())) cout << "NE" << endl;
	else cout << "DA" << endl;
	num--;
	
	}
	
	return 0;
	
}

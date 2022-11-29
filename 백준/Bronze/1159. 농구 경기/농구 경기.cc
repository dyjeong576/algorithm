#include <iostream>

using namespace std;

int main()
{
	int n;
	string name;
	int a[26] = {0};
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> name;
		a[name[0]-'a']++;
	}
	
	name = "";
	for(int i=0; i<26; i++){
		if(a[i] >= 5){
			name += char(i+97);
		}
	}
	
	if(name == "") name = "PREDAJA";
	cout << name;
	
	return 0;
	
}
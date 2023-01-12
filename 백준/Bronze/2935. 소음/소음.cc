#include <bits/stdc++.h>
using namespace std;

int a[101];
char tmp;
int sum;
string x, y;

int main(){
	
	cin >> x >> tmp >> y;
	if(tmp == '*'){
		cout << '1';
		sum = x.length() + y.length() - 2;
		while(sum--){
			cout << '0';
		}
	}
	else if( tmp == '+'){
		a[x.length()-1]++;
		a[y.length()-1]++;
		for(int i=max(x.length(), y.length())-1; i>=0; i--){
			cout << a[i];
		}
	}
	
	return 0;
	
}
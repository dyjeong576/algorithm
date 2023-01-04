#include <bits/stdc++.h>
using namespace std;

string a;
long long x, i, sum;
string ret;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	for(int i=0; i<=9; i++) a += 48+i;
	for(int i=10; i<=35; i++) a += 55 + i;

	cin >> ret >> x;
	
	while(ret != ""){
		ret.back();
		sum += pow(x, i++) * a.find(ret.back());
		ret.pop_back();
		
	}
	
	cout << sum << endl;
	return 0;

}
#include <bits/stdc++.h>
using namespace std;

int day, a, b, v;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> a >> b >> v;
	
	day = (v-b)/(a-b);
	
	if((v-b)%(a-b) != 0) ++day;
	
	cout << day << endl; 


	return 0;
	
}
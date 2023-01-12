#include <bits/stdc++.h>
using namespace std;

int n, ret, x;
int a[1001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	if(n>=90) cout << 'A' << endl;
	else if(n<90 && n>=80) cout << 'B' << endl;
	else if(n<80 && n>=70) cout << 'C' << endl;
	else if(n<70 && n>=60) cout << 'D' << endl;
	else cout << 'F' << endl;

	return 0;
	
}
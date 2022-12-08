#include <bits/stdc++.h>

using namespace std;

int n;
string str;
char p[65][65];

string go(int y, int x, int size){
	if(size == 1) return string(1, p[y][x]);
	char b = p[y][x];
	string ret = "";
	for(int i = y; i < y + size; i++){
		for(int j = x; j < x + size; j++){
			if(b != p[i][j]){
				ret += '(';
				ret += go(y, x , size/2);
				ret += go(y, x+size/2, size/2);
				ret += go(y + size/2, x, size/2);
				ret += go(y + size/2, x + size/2, size/2);
				ret += ')';
				
				return ret;
			}
		}
	}
	
	return string(1 , b);
	
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    for(int i = 0; i<n; i++){
    	cin >> str;
    	for(int j = 0; j<n; j++){
    		p[i][j] = str[j];
		}
	}
	
	cout << go(0,0,n) << endl;
    
	return 0;
	
}
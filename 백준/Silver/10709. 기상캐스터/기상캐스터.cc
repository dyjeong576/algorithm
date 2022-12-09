#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int h , w, tmp;
    char d[101][101];
    
    cin >> h  >> w;
    
    for(int i = 0; i < h; i++){
    	for(int j = 0; j<w; j++){
    		cin >> d[i][j];
		}
	}
	for(int i = 0; i<h; i++){
		tmp = -1;
		for(int j = 0; j<w; j++){
			if(d[i][j] == 'c') tmp = 0;
            cout << tmp << " ";
            if(tmp != -1) tmp++;
			}
		cout << '\n';
	}
		
	return 0;
	
}
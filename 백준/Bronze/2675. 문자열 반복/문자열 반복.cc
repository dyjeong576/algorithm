#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int num, cnt;
    string str;
    
    cin >> num;
    
    while(num--){
        cin >> cnt >> str;
        
        for(char s : str){
            for(int i = 0; i<cnt; i++) cout << s;
        }
        
        cout << endl;
    }

	return 0;
	
}
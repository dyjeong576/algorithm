#include <iostream>

using namespace std;

int main()
{
	int num;
    int count;
    string s;
    
    cin >> num;
    
    while(num){
        cin >> s;
        count = 0;
        for(char tmp : s){
            if(tmp == '(') count++;
            else count--;
            if(count < 0) break;
        }
        if(count) cout << "NO" << "\n";
        else cout << "YES" << "\n";
        num--;
    }
    
    return 0;
    
}
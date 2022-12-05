#include <iostream>

using namespace std;

int main()
{
	int num, answer;
    string s;
	
	cin >> num;
    
    answer = num;
	
	while(num){
        cin >> s;
        int check[26] = {0};
        check[s[0] - 'a']++;
        for(int i = 1; i<s.length(); i++){
            if(check[s[i] - 'a'] == 0 || s[i] == s[i-1]) check[s[i] - 'a']++;
            else{
                answer--;
                break;
            }
        }
        num--;
	}
    
    cout << answer;
    
    return 0;
    
}
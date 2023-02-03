#include <bits/stdc++.h>
using namespace std;

stack<int> n;
stack<char> s;
string str;
int tmp;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> str;
    
    for(auto c : str){
    	if(c == '(' || c == '['){
    		n.push(1);
    		s.push(c);
		}
		else{
			if(n.empty() || s.empty() || (c == ']' && s.top() != '[') || (c == ')' && s.top() != '(')) {
				s.push(c);
				break;
			}
			if(n.top() == 1) {
				tmp = 1;
				n.pop();
			}
			else{
				tmp = 0;
				while(1){
					if(n.top() == 1){
						n.pop(); break;
					}
					tmp += n.top(); n.pop();
				}	
			}
			c == ']' ? tmp *= 3 : tmp *= 2;
			n.push(tmp);
			s.pop();
		}
	}
	
	if(!s.empty()) tmp = 0;
	else{
		tmp = 0;
		while(n.size()){
			tmp += n.top(); n.pop();
		}
	}
	
	cout << tmp << endl;
	
    
    return 0;
    
}
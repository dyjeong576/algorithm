#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string mt = "aeiou";
	string str;
	bool flag, mtflag;
	vector<int> check;
    
    while(1){
    	cin >> str;
    	
    	if(str == "end") break;
    	
    	flag = true;
    	for(int i = 0; i<5; i++){
    		if(str.find(mt[i]) != string::npos){
    			flag = false;
    			break;
			}  
		}
		
		if(flag){
		cout << "<" << str << "> is not acceptable." << "\n";
		continue;
		}
		
		flag = false;
		check.clear();
		for(int i = 0; i<str.length(); i++){
			mtflag = false;
			for(int j = 0; j<5; j++){
				if(mt.find(str[i]) == string::npos){
					mtflag = true;
					break;
				}
			}
			if(mtflag) check.push_back(1);
			else check.push_back(0);
			if(i > 1 && check[i] == check[i-1] && check[i-1] == check[i-2]){
				flag = true;
				break;
			}
		}
		   
		if(flag){
		cout << "<" << str << "> is not acceptable." << "\n";
		continue;
		}
		
		flag = false;
		for(int i = 1; i<str.length(); i++){
			if(str[i] == str[i-1]){
				if(str[i] != 'e' && str[i] != 'o'){
					flag = true;
					break;
				}
			}
		}
		
		if(flag)	
			cout << "<" << str << "> is not acceptable." << "\n";
		else
			cout << "<" << str << "> is acceptable." << "\n";	
		
	}
    	
	return 0;
	
}
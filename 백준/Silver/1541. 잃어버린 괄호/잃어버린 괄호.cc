#include <bits/stdc++.h>
using namespace std;

string s;
char k;
int tmp, x;
queue<int> q;
queue<char> v;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		if(s[i]>='0'&&s[i]<='9'){
			tmp = tmp*10 + s[i]-'0';
		}
		else{
			q.push(tmp); tmp=0;
			v.push(s[i]);
		}
	}
	q.push(tmp);
	
	tmp = q.front(); q.pop();
	while(q.size()){
		k = v.front(); v.pop();
		if(k == '-'){
			x = q.front(); q.pop();
			while(v.front() == '+'){
				x += q.front();
				q.pop(); v.pop();
			}
			tmp -= x;	
		}
		else{
			tmp += q.front(); q.pop();
		}
	}
	
	cout << tmp << endl;
	
	return 0;
	
}
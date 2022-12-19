#include <bits/stdc++.h>
using namespace std;

int num[10000001];
void Prime(){
    num[0] = 1; num[1] = 1;
    for(int i = 2; i<10000001; i++){
        if(num[i] == 1) continue;
        for(int j = 2*i; j<10000001; j+= i){
            num[j] = 1;
        }
    }
}

int solution(string numbers) {
    int answer = 0;
    string n;
    
    sort(numbers.begin(), numbers.end());
    Prime();
    do{
        for(int i = 1; i<=numbers.length(); i++){
            n = numbers.substr(0, i);
            if(num[stoi(n)] == 0){
                answer++;
                num[stoi(n)] = 2;
            }
        }
    }while(next_permutation(numbers.begin(), numbers.end()));
    
    return answer;
}
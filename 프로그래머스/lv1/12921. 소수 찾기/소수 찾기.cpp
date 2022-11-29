#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    vector<bool> check(n+1, true);
    int i, k, answer = 0;
    
    for(i = 2; i< n+1; i++){
        if(check[i]){
            answer++;
            for(k = i; k<n+1; k += i){
                check[k] = false;
            }
        }
    }
    
    return answer;
        
}
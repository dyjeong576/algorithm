function solution(survey, choices) {
    var answer = '';
    const ret = [0,3,2,1,0,1,2,3];
    const ch = ["R", "T", "C", "F", "J", "M", "A", "N"];
    const score = new Array(8).fill(0);
    var tmp;
    let i, j;
    
    for(i=0; i<survey.length; i++){
        if(choices[i] > 4)  tmp = survey[i][1]; 
        else tmp = survey[i][0]; 
        j = ch.indexOf(tmp);
        score[j] += ret[choices[i]];
    }
    for(i=0; i<8; i++){
        if(score[i] < score[i+1]) answer += ch[i+1];
        else answer += ch[i];
        i += 1;
    }

    return answer;
    
}
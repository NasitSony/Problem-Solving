int bestSum(int target, vector<int> numbers){
    unordered_map<int, int> dp;
    dp[0] = 0;
    
    for(int i = 0;  i < target+1; i++){
        if(dp.find(i) != dp.end()){
            for(int num:numbers){
                if(dp.find(i+num) == dp.end())
                      dp[i+num]=dp[i]+1;
                else{
                    if(dp[i+num]>(dp[i]+1))
                       dp[i+num] = dp[i]+1;
                }          
              }
        }
    } 
    if(dp.find(target) != dp.end())
       return dp[target];
    return 0;
}

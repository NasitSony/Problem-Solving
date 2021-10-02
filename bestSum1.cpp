int bestSum(int target, vector<int> numbers){
    unordered_map<int, vector<int>> dp;
    dp[0] = {};
    
    for(int i = 0;  i < target+1; i++){
        if(dp.find(i) != dp.end()){
            for(int num:numbers){
                  vector<int> temp = dp[i];
                temp.push_back(num);
                if(dp.find(i+num) == dp.end())
                      dp[i+num]=temp;
                else{
                    if(dp[i+num].size()>temp.size())
                       dp[i+num] = temp;
                }          
              }
        }
    } 
    if(dp.find(dp.size()-1) != dp.end())
       return dp[target].size();
    return 0;
}

vector<int> howSum(int target, vector<int> numbers){
    unordered_map<int, vector<int>> dp;
    dp[0] = {};
    
    for(int i = 0;  i < target+1; i++){
        if(dp.find(i) != dp.end()){
            for(int num:numbers){
                  vector<int> temp = dp[i];
                temp.push_back(num);
                 dp[i+num]=temp;
              }
        }
    } 
    if(dp.find(dp.size()-1) != dp.end())
       return dp[target];
    return {};
}

bool canSum(int target, vector<int> numbers){
    vector<bool> dp(target+1, false);
    dp[0] = true;
    
    for(int i = 0; i<dp.size(); i++){
        if(dp[i])
          for(int num: numbers)
             dp[i+num] = true;
    }
    return dp[dp.size()-1];
}

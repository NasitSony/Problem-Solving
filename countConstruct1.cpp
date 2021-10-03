int countContruct(string target, vector<string> word_set){
    
    vector<int> dp(target.size()+1, 0);
    dp[0] = 1;
    
    for(int i=0; i<=target.size(); i++){
        for(string word:word_set){
           if((i+word.size())<=target.size())
           {
                   if(target.substr(i, word.size()) == word){
                       dp[i+word.size()] += dp[i];
                }
            }
       } 
    }
    return dp[dp.size()-1];
}

vector<vector<string>> allConstruct(string target, vector<string> word_set){
    unordered_map<int, vector<vector<string>>> dp;
    dp[0] = {{}};
    
    for(int i = 0;  i <= target.size(); i++){
        
        for(string word:word_set){
           if((i+word.size())<=target.size())
           {
                   if(target.substr(i, word.size()) == word){
                       vector<vector<string>> temp = dp[i];
                       for(vector<string> &t1 : temp)
                          { 
                            t1.push_back(word);
                            dp[i+word.size()].push_back(t1);
                          }
                }
            }
       } 
    } 
    
    return dp[target.size()];
}

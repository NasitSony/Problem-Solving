bool canContruc(string target, unordered_set<string> &word_set){
    
    vector<bool> dp(target.size(), false);
    dp[0] = true;
    
    for(int i=0; i<target.size()+1; i++){
        
       if(dp[i]){
           for(string word:word_set){
               if((i+word.size())<=target.size()){
                  
                   if(target.substr(i, i+word.size()) == word){
                       dp[i+word.size()] = true;
                   }
               }
           }
       }
    } return dp[target.size()];
}

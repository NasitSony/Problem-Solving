vector<vector<string>>& allConstruct(string target, unordered_set<string> &word_break, unordered_map<string, vector<vector<string>>> &memo){
      
    if(memo.find(target) != memo.end()) return memo[target];
    if(word_break.find(target) != word_break.end()){
        memo[target] = {{target}};
        return memo[target];
    }
    for(int i = 0; i< target.size(); i++){
        string s1 = target.substr(0,i);
        if(word_break.find(s1) != word_break.end()){
        
            string s2 = target.substr(i);
            vector<vector<string>> temp = allConstruct(s2, word_break, memo);
            vector<vector<string>> temp2 = memo[target];
            for(vector<string> &t1 : temp)
               { t1.push_back(s1);
                   temp2.push_back(t1);
               }
            memo[target] = temp2; 
        }
    }
    return memo[target];
}

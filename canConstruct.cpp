bool canConstruct(string target, unordered_set<string> &word_break, unordered_map<string, bool> &memo){
      
    if(memo.find(target) != memo.end()) return true;
    if(word_break.find(target) != word_break.end()) return true;
    for(int i = 0; i< target.size(); i++){
        string s1 = target.substr(0,i);
        if(word_break.find(s1) != word_break.end()){
           
            string s2 = target.substr(i);
            if(s2 == "") return true;
            if(canConstruct(s2, word_break, memo)){
                memo[target] = true;
                return true;
            }
            
        }
        
    }
    
    return false;
}

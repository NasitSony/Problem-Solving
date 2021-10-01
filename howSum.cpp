
bool howSum(int target, vector<int>numbers, unordered_map<int, vector<int>> &memo){
    
    
    if(memo.find(target) != memo.end()){
        if(memo[target][0] == -1)
           return false;
           return true;
    }
    if(target < 0) {
        memo[target].push_back(-1);
        return false;
        
    }
    
    
    for(int x:numbers){
        if((target-x) == 0) 
        {
            memo[0].push_back(x);
            return true;
            
        }else if(howSum(target-x, numbers, memo)){ 
          memo[0].push_back(x);  
          return true;
       }
    }
    
    memo[target].push_back(-1);
      return false;
}

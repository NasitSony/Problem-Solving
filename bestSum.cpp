bool bestSum(int target, vector<int>numbers, unordered_map<int, vector<int>> &memo){
    
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
            memo[target]={x};
            return true;
            
        }else if(bestSum(target-x, numbers, memo)){ 
          vector<int> temp(memo[target-x].begin(), memo[target-x].end());
          if(memo.find(target) != memo.end()){
             if( memo[target].size()> (temp.size()+1))
             {
                 memo[target]= temp;
                 memo[target].push_back(x);  
             }
          }else{
              memo[target]= temp;
              memo[target].push_back(x); 
          }
       }
    }
     if(memo.find(target) != memo.end()){
         return true;
     }
    memo[target].push_back(-1);
      return false;
}

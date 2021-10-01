bool canSum(int target, vector<int> &numbers){
    
    if(target == 0) return true;
    if(target < 0) return false;
    
    
    for(int x:numbers)
      if(canSum(target-x, numbers)) return true;;
      
      return false;
}


 bool canSumMemo(int target, vector<int> &numbers, unordered_map<int, bool> &memo){
    
    if(memo.find(target) != memo.end()) return memo[target];
   
    if(target == 0) return true;
    if(target < 0) return false;
    
    
    for(int x:numbers)
      if(canSumMemo(target-x, numbers, memo)){ 
        memo[target] = true;  
        return true;
      }
       memo[target] = false;  
      return false;
}

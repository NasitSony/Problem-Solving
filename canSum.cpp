bool canSum(int target, vector<int> &numbers){
    
    if(target == 0) return true;
    if(target < 0) return false;
    
    
    for(int x:numbers)
      if(canSum(target-x, numbers)) return true;;
      
      return false;
}

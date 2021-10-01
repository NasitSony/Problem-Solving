int gridTraveler(int n, int m, vector<vector<int>> &memo){
    
    if(memo[n][m] != 0) return (memo[n][m]);
    if(n == 0 || m == 0) return 0;
    if(n == 1 || m == 1) return 1;
    
    memo[n][m] = gridTraveler(n-1,m, memo) + gridTraveler(n, m-1, memo);
    
    return memo[n][m];
}

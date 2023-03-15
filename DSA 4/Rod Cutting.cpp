int cutRod(int price[], int n) {
        int rod[n];
        for(int i=1;i<=n;i++)rod[i-1]=i;
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(rod[i-1]<=j){
                    dp[i][j]=max(dp[i-1][j],dp[i][j-rod[i-1]]+price[i-1]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][n];
    }
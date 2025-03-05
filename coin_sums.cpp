#include <bits/stdc++.h>
using namespace std;

// dp[0] = 1 
// dp[1] = 1 
// dp[2] = 2 
// ... 
// dp[200].

int main(){

    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200}; 
    int n = 200;
    
    vector<long long> dp(n + 1, 0); 
    dp[0] = 1; // base
    
    for(int coin : coins){
        for(int i = coin; i <= n; i++){
            dp[i] += dp[i - coin]; 
        }
    }
    
    cout << dp[n] << endl; 

    return 0;    
}




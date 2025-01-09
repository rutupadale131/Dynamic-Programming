#include <bits/stdc++.h>
using namespace std;

int generateFib(int n,vector<long long> &dp){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=generateFib(n-1,dp) + generateFib(n-2,dp);
    return dp[n];
}

class solution {
public:
    long long fib(int n) {
        // Write Your Code Here...
        vector <long long> dp(n+1,-1);
        
        int result=generateFib(n,dp);
        return result;
    }
};
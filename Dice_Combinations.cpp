#include<bits/stdc++.h>
#include<stdio.h>
#define int               long long
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define all(x) (x).begin(), (x).end()
#define vec(v, n) vector<int> v(n);for (int i = 0; i < n; i++) cin >> v[i];
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
using namespace std;

int go(int n,vector<int> &dp){
    if(n==0){
        return 1;
    }
    int & ans1 = dp[n];
    if(ans1 !=-1){
        return ans1;
    }
    int ans = 0;
    for(int i=1;i<=6;i++){
        if((n-i)>=0){
            ans += go(n-i,dp);
            ans %= MOD;
        }
    }
    return ans1 = ans;
}

void solve(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<go(n,dp);
}

int32_t main() {
    solve();
    return 0;
}
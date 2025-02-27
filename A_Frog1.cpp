//  Link to the problem : https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;


void solve()
{
   ll n; 
   cin>> n;
   vector<ll>height;
   for(ll i=0;i<n;i++)
   {
      ll tem;
      cin>> tem;
      height.push_back(tem);
   }

   vector<ll>dp(n+1, 0);
   dp[0]= 0;
   dp[1]= abs(height[1]-height[0]);
   if(n==2)
   {
       cout<< dp[n-1];
       return ;
   }

   // dp[2] = min((abs(height[2]-height[0]) + dp[0]) ,
   //          (abs(height[2]-height[1]) + dp[1]))
   
   for(ll i= 2;i<n;i++)
   {
      dp[i] = min((abs(height[i]-height[i-2]) + dp[i-2]) ,
            (abs(height[i]-height[i-1]) + dp[i-1]));
   }
   
   cout<< dp[n-1] << "\n";
}

int main() {
    
    int t;
    // cin>> t;
    t= 1;

    while(t--)
    {
      solve();
    }
    return 0;
}

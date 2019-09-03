git remote add origin https://gith/*
  Author - KISHAN TIWARI
  Dream bigger. Do bigger.
  Wake up with determination. Go to bed with satisfaction.
*/
//Sometimes later becomes never. Do it now.
#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define mod          1000000007
#define fi           first
#define se           second
#define pa           pair <ll,ll>
#define mp           make_pair
#define pb           push_back
#define ve           vector<ll>
#define vep          vector< pa >
#define all(a)       a.begin(), a.end()
#define sz(x)        (ll)x.size()
#define c(t)         cout<<t<<"\n"
using namespace std;
void solve()
{
ll n;
cin>>n;
ll a[n];
vector<pair<ll,ll> >ad(n);
f(i,0,n)
{cin>>a[i];
 ad[i]={a[i],i};
}
sort(all(ad));
vector<vector<ll> > dp(n+1,vector <ll> (n+1,0));
vector<ll> ans(n+1);
f(p,0,n)
{
   ll ma=0,mx=0,i=ad[p].se,va=ad[p].fi;
   for(ll j=i-1;j>=0;j--)
   {  if(va>a[j])
       ma=max(ma,dp[j][i-1]+1);
     dp[i][j]=ma;
   }
   mx=ma;
   ma=0;
   f(j,i+1,n)
   {
        if(va>a[j])
       ma=max(ma,dp[j][i+1]+1);
     dp[i][j]=ma;
   }
   mx=max(ma,mx);
  // cout<<mx<<" ";
  ans[i]=mx;
}
f(i,0,n)
cout<<ans[i]<<" ";
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }
return 0;
}
ub.com/TiwariKishan/Codechef-Solution.git
git push -u origin master

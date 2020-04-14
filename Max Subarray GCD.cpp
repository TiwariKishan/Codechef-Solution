/*
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
bool fr(ll mid,ll k,ve a);
/*ll _gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return(b,a%b);
}*/
void solve()
{  ll n,k;
cin>>n>>k;
ve a(n);
f(i,0,n)
cin>>a[i];
ll l=0,r=n,mid;
while(l<r)
{
    mid=l+(r-l+1)/2;
    if(fr(mid,k,a))
        l=mid;
    else
        r=mid-1;
}
c(l);
}
bool fr(ll mid,ll k,ve a)
{ll n=a.size();
    ve pr(n),po(n);
    for(ll i=0;i<n;i+=mid)
    { //c(mid);
        ll l=i,r = min(n-1,i + mid-1);;
        pr[l]=a[l];
        f(j,l+1,r+1)
        pr[j]=__gcd(pr[j-1],a[j]);
        po[r]=a[r];
        for(ll j=r-1;j>=l;j--)
        po[j]=__gcd(po[j+1],a[j]);
    }
    for(ll i=0;i+mid-1<n;i++)
    {
        if(__gcd(po[i],pr[i+mid-1])>=k)
            return true;
    }
        return false;
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

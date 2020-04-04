#include<bits/stdc++.h>
#define ll long long int

#define pb push_back
#define rep(i,n) for (ll i = 0; i < n; ++i)
#define repk(i,k,n) for (ll i = k; i <= n; ++i)
#define repkr(i,k,n) for (ll i = k; i >= n; --i)
using namespace std;


int main()
{
    int t;
    cin >> t;
    for (ll k = 0; k < t; ++k)
    {
       int n;
       cin >> n;
       vector<int> v;
       vector<int> v1;
       multimap<int,int> mp;
       rep(i,n){
           int x,y;
           cin >> x >> y;
           v.pb(x);
           v1.pb(x);
           mp.insert(pair<int,int>(x,y));
       }
       for(int i=0;i<5;i++){}
       bool b = true;
       int c = 0;
       int j = 0;
       string s;
       s="";
       sort(v.begin(),v.end());
       cout<<"Case #"<<k+1<<": ";

       for (ll i = 0; i < n; ++i)
       {
           if(v[i]>=j){
               s+="J";
               j = mp.find(v[i])->second;
               mp.erase(mp.find(v[i]));
           }
           else if(v[i]>=c){
               s+="C";
               c = mp.find(v[i])->second;
               mp.erase(mp.find(v[i]));
           }
           else{
               b = false;
               break;
           }
       }
       if(b == false){
           cout<<"IMPOSSIBLE"<<endl;
       }
       else{
           string r="";
           for(auto itr=v1.begin();itr!=v1.end();++itr){
               int p = distance(v.begin(),find(v.begin(),v.end(),*itr));
               v[p]=-1;
               r+=s[p];
           }
           cout<<r<<endl;
       }
    }
    return 0;
}

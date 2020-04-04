#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int b=1;b<=t;b++){
        int m;
        scanf("%d",&m);
        int a[m][m];
        long long sum=0,count1=0,count2=0;;
        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
        {
                scanf("%d",&a[i][j]);
                if(i==j) sum+=a[i][j];
        }
        map<int,bool> mp;
        for(int i=0;i<m;i++)
        {
            mp.clear();
            for(int j=0;j<m;j++)
            {
                if(mp[a[i][j]]!=0)
                {
                    count1++;
                    break;
                }
                else{
                    mp[a[i][j]]=1;
                }
            }
        }
        for(int j=0;j<m;j++)
        {
            mp.clear();
            for(int i=0;i<m;i++)
            {
                if(mp[a[i][j]]!=0)
                {
                    count2++;
                    break;
                }
                else{
                    mp[a[i][j]]=1;
                }
            }
        }
        printf("Case #%d: %lld %d %d\n",(b),sum,count1,count2);
    }
    return 0;
}

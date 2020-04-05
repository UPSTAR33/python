#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int b=0;b<t;b++)
    {
    int m,n;
    scanf("%d",&m);
    int t,a[m][m],sum=0,count1=0,count2=0,temp=0,temp1=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<m;i++)
    {

        for(int j=0;j<m;j++)
    {
        if(i==j)
        {
            sum=sum+a[i][i];
        }
    }
    }
    for(int i=0;i<m;i++)
    {
        temp=0;
        for(int j=0;j<m-1;j++)
    {
        for (int k=j+1;k<m;k++)
        {
        if(a[i][j]==a[i][k])
        {
            count1=count1+1;
            temp=-1;
            break;
        }
        }
        if(temp==-1)
            break;
    }
    }
    for(int j=0;j<m;j++)
    {
        temp=0;
        for(int i=0;i<m-1;i++)
    {
        for(int k=i+1;k<m;k++)
        {
        if(a[i][j]==a[k][j])
        {
            count2=count2+1;
            temp1=-1;
            break;
        }
        }
        if(temp1==-1)
            break;
    }
    }
    printf("Case %d#: %d %d %d\n",(b+1),sum,count1,count2);
    }
    return 0;
}

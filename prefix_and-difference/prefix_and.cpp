#include<iostream>
using namespace std;

int sum[100010];

int main()
{
    int n,m;
    cin>>n>>m;
    
    sum[0]=0;
    
    for(int i=1;i<=n;i++)
    {
        cin>>sum[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        sum[i]+=sum[i-1];
    }
    
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        cout<<sum[y]-sum[x-1]<<endl;
    }
    
    return 0;
}
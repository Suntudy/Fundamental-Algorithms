#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    
    //构造差分数列
    for(int i=n;i>0;i--) v[i]-=v[i-1];
    
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a]+=c;v[b+1]-=c;
    }
    
    for(int i=1;i<=n;i++) 
    {
        v[i]+=v[i-1];
        cout<<v[i]<<" ";
    }
    
    return 0;
}
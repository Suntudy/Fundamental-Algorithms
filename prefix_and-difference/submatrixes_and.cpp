#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    
    vector<vector<int>>vv(n+1,vector<int>(m+1));
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>vv[i][j];
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            vv[i][j]+=(vv[i-1][j]+vv[i][j-1]-vv[i-1][j-1]);
            //cout<<vv[i][j]<<" ";
        }
        //cout<<endl;
    }
    
    int x1,y1,x2,y2;
    for(int k=1;k<=q;k++)
    {
        cin>>x1>>y1>>x2>>y2;
        //cout<<vv[x2][y2]<<" "<<vv[x2][y1-1]<<" "<<vv[x1-1][y2]<<" "<<vv[x1-1][y1-1]<<endl;
        int ans=vv[x2][y2]-vv[x2][y1-1]-vv[x1-1][y2]+vv[x1-1][y1-1];
        cout<<ans<<endl;
    }
    
    return 0;
}
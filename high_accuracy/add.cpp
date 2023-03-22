#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    
    vector<int>ans;
    int i=a.size()-1,j=b.size()-1;
    int x=0;
    
    while(i>=0&&j>=0)
    {
        int m=a[i]+b[j]-'0'-'0'+x;
        if(m>=10) x=1;
        else x=0;
        m%=10;
        ans.push_back(m);
        i--;j--;
    }
    while(i>=0)
    {
        int m=a[i]-'0'+x;
        if(m>=10) x=1;
        else x=0;
        m%=10;
        ans.push_back(m);
        i--;
    }
    while(j>=0)
    {
        int m=b[j]-'0'+x;
        if(m>=10) x=1;
        else x=0;
        m%=10;
        ans.push_back(m);
        j--;
    }
    if(x==1) ans.push_back(1);
    
    for(int k=ans.size()-1;k>=0;k--) {cout<<ans[k];}
    
    return 0;
}
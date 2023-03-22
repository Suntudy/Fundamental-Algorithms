#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string a;
    int b;
    cin>>a>>b;
    
    vector<int>A;
    for(int i=0;i<a.size();i++)
    {
        A.push_back(a[i]-'0');
    }
    
    int m=0;
    vector<int>ans;
    for(int i=0;i<A.size();i++)
    {
        m*=10;m+=A[i];
        if(m<b) ans.push_back(0);
        else
        {
            ans.push_back(m/b);
            m%=b;
        }
    }
    
    int i=0;
    while(i<ans.size()&&ans[i]==0){i++;}
    if(i==ans.size()) cout<<0;
    else
        for(;i<ans.size();i++){cout<<ans[i];}
    cout<<endl;
    cout<<m<<endl;
    
    return 0;
}
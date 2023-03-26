//区间合并
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(2));
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i][0]>>v[i][1];
    }
    
    sort(v.begin(),v.end());
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i][0]<<" "<<v[i][1]<<endl;
    // }
    // return 0;
    
    int i=0,j=i+1;
    int sum=1;
    
    while(j<n)
    {
        if(v[j][0]<=v[i][1])
        {
            if(v[j][1]>v[i][1]) i=j; 
        }
        else
        {
            sum++;
            i=j;
        }
        j++;
    }
    
    cout<<sum<<endl;
    
    return 0;
}
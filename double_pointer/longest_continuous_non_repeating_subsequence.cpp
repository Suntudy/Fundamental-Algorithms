//最长连续不重复子序列
#include<iostream>
using namespace std;

const int N=100010;
int v[N];
int s[N];

int n;

int main()
{
    cin>>n;
    
    for(int i=0;i<n;i++) cin>>v[i];
    
    int len=0;
    
    for(int i=0,j=0;i<n;i++)
    {
        s[v[i]]++;
        while(s[v[i]]>1)
        {
            s[v[j]]--;
            j++;
        }
        len=max(len,i-j+1);
        //cout<<i-j+1<<endl;
    }
    cout<<len<<endl;
    
    return 0;
}
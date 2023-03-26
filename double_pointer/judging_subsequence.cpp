//判断子序列
#include<iostream>
using namespace std;

const int N=100010;
int a[N];
int b[N];

int n,m;

int main()
{
    cin>>n>>m;
    
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    
    int i,j;
    for(i=0,j=0;i<n;i++)
    {
        while(j<m)
        {
            if(b[j]==a[i]) {break;}
            j++;
        }
        if(j==m) {cout<<"No"<<endl;return 0;}
        j++;
    }
    cout<<"Yes"<<endl;
    
    return 0;
}
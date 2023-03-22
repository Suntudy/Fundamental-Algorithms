#include<iostream>
#include<vector>
using namespace std;

void quick_sort(vector<int>&v,int l,int r)
{
    if(l>=r) return;
    int m=v[(l+r)/2];
    int i=l-1,j=r+1;
    while(i<j)
    {
        do i++;while(v[i]<m);
        do j--;while(v[j]>m);
        if(i<j) swap(v[i],v[j]);
    }
    quick_sort(v,l,j);
    quick_sort(v,j+1,r);
}

int main()
{
    int n;
    scanf("%d",&n);
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    quick_sort(v,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}
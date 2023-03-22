#include<iostream>
#include<vector>
using namespace std;

int v[100000];
int k;

int bsearch_1(int l,int r)
{
    while(l < r)
    {
        int mid = l+r >> 1;
        if(v[mid]>=k) r=mid;
        else l=mid+1;
    }
    return l;
}

int bsearch_2(int l,int r)
{
    while(l<r)
    {
        int mid= l+r+1 >> 1;
        if(v[mid]<=k) l=mid;
        else r=mid-1;
    }
}

int main()
{
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 1; i <= q; i++)
    {
        cin >> k;
        int l = bsearch_1(0,n-1);
        
        if(v[l] != k) cout<<-1<<" "<<-1<<endl;
        else
        {
        	int r = bsearch_2(l,n-1);
        	cout << l << " " << r <<endl;
        }
    }
    return 0;
}
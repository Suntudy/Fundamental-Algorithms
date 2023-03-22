#include<iostream>
using namespace std;

double x;

double bsearch_1(double l,double r)
{
    while((r-l) > 1e-8)
    {
        double mid=(l+r)/2;
        if(mid*mid*mid >= x) r=mid;
        else l=mid;
    }
    return l;
}

int main()
{
    cin >> x;
    double ans;
    if(x>=0) 
    {
        if(x>=1) ans=bsearch_1(0,x);
        else ans=bsearch_1(0,1);
    }
    else 
    {
        if(x<=-1) ans=bsearch_1(x,0);
        else ans=bsearch_1(-1,0);
    }
    printf("%.6lf",ans);
    return 0;
}
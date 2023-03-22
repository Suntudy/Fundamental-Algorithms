#include<iostream>
#include<vector>
using namespace std;

vector<int>C;

vector<int> substract(vector<int>&A,vector<int>&B)
{
    int i;
    for(i=0;i<A.size()&&i<B.size();i++)
    {
        if(A[i]>=B[i]) C.push_back(A[i]-B[i]);
        else 
        {
            C.push_back(A[i]+10-B[i]);
            int j=i+1;
            while(A[j]==0)
            {
                A[j++]=9;
            }
            A[j]--;
        }
    }
    while(i<A.size()) {C.push_back(A[i++]);}
    
    return C;
}

int main()
{
    string a,b;
    cin>>a>>b;
    
    vector<int>A,B;
    for(int i=a.size()-1;i>=0;i--) {A.push_back(a[i]-'0');}
    for(int i=b.size()-1;i>=0;i--) {B.push_back(b[i]-'0');}
    
    //for(int s=0;s<A.size();s++) {cout<<A[s];}
    
    bool mark=true;
    
    if(a.size()>b.size()) C=substract(A,B);
    else if(a.size()<b.size()) {C=substract(B,A);mark=false;}
    else
    {
        int i=0;
        for(;i<a.size();i++)
        {
            if(a[i]>b[i]) {C=substract(A,B);break;}
            if(a[i]<b[i]) {C=substract(B,A);mark=false;break;}
        }
        if(i==a.size()) {cout<<0<<endl;return 0;}        
    }
    
    if(mark==false) cout<<"-";
    
    int k=C.size()-1;
    while(C[k]==0) {k--;}
    for(;k>=0;k--) {cout<<C[k];}
    
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int>S;

void plusfunction(vector<int>&S,vector<int>&C)
{
    vector<int>P;
    
    int m=0;
    for(int i=0;i<S.size()||i<C.size();i++)
    {
        if(i<S.size()) m+=S[i];
        if(i<C.size()) m+=C[i];
        P.push_back(m%10);
        m/=10;
    }
    if(m) P.push_back(m);
    
    S=P;
}

int main()
{
    string a,b;
    cin>>a>>b;
    
    if(a=="0"||b=="0") {cout<<0<<endl;return 0;}
    
    vector<int>A,B;
    
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');
    
    for(int i=0;i<B.size();i++)
    {
        vector<int>C;
        for(int j=0;j<i;j++) C.push_back(0);
        
        int m=0;
        for(int j=0;j<A.size();j++)
        {
            m+=A[j]*B[i];
            C.push_back(m%10);
            m/=10;
        }
        if(m) C.push_back(m);
        
        if(i==0) S=C;
        else plusfunction(S,C);
        
        // for(int k=C.size()-1;k>=0;k--) cout<<C[k];
        // cout<<endl;
    }
    
    for(int k=S.size()-1;k>=0;k--) cout<<S[k];
        
    return 0;
}
//二进制中1的个数
#include<iostream>
using namespace std;

int main()
{
	int n;
    cin >> n;
    
    for(int i = 0; i < n; i ++)
    {
    	int x,num=0;
        cin >> x;
        while(x)
        {
            x -= x & (-x);
            num++;
        }
        cout << num << " ";
    }
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
//int func(int n)
//{
//
//    for (int i =1;i<=1000;i++)
//    {
//        a[i]= a[i-1] + pow(-1,i)*i;
//    }
//    return a[n];
//}
int main() {
    int t ,n,ans = 0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n%2==0)
        {  ans = n/2;
            cout<<ans<<endl;
        }
        else
        {   ans = (n/2)-n;
            cout<<ans<<endl;
        }

    }

	return 0;
}

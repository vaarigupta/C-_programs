#include<iostream>
using namespace std;
int multi(int x , int y)
{
    if(y==1)
    {
        return x;
    }
    if(y>0){
         return x + multi(x , y-1);
    }
    else
    {
        return 0;
    }



}
int main()
{  int x , y ,ans;
cout<<"enter the value for x and y"<<endl;
cin>>x>>y;

    ans = multi(x,y);
    cout<<"ANS IS "<<ans<<endl;
    return 0;
}

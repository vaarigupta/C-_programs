#include<iostream>
using namespace std;
void cel_fah(int init, int fin, int step )
{
    for (; init<=fin;)
    {
        int c=5*(init-32) /9;
        cout<<init<<" "<<c<<endl;
        init= init+step;
    }
}
int main()
{ int i,f,s;
cin>>i>>f>>s;
cel_fah(i,f,s);
    return 0;
}

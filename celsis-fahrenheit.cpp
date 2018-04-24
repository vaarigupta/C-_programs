#include <iostream>
using namespace std;
int main()
{

    int initialv, finalv,stepv;
    cin>>initialv>>finalv>>stepv;
   while (initialv<=finalv)
   {
    int c;
    c=5*(initialv -32) /9;
       cout<<initialv<<" "<<c<<endl;
       initialv=initialv+stepv;
   }
    return 0;
}

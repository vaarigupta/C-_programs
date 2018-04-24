#include<iostream>
using namespace std;
void area(float r){
    float ar = 3.14*r*r;
    float cir = 2*3.14 *r;
    cout<<ar<<endl;
    cout<<cir;

}
int main()
{
   float rad;
   cin>>rad;
   area(rad);

}

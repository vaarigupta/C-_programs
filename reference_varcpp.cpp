#include<iostream>
using namespace std;
int *fun(int n)
{ /// func to return the address of a variable
    int *x = &n;
    return x;
}
int main()
{
int x=10;
int *p = &x;
int &y = x;///reference variable -> different name for same memory block(bucket)
cout<<"the value of y(reference variable) -> "<<y<<endl<<"the value of x ->"<<x<<endl<<endl;
cout<<"the address from a local pointer->"<<p<<endl<<endl;
cout<<" when a function returns a pointer(address of var-x)-> "<<endl<<fun(x)<<" "<<fun(y)<<endl<<endl;
cout<<"Increment y by 1:"<<endl<<endl;
y++;
cout<<"the value of x is "<<x<<endl;
cout<<"the value of y(ref var) -> "<<y<<endl<<endl;
cout<<" when a function returns a pointer(address of var-x)-> "<<endl<<fun(x)<<" "<<fun(y)<<endl;
cout<<" OUR CONCLUSION IS THAT THE MEMORY ALLOCATED ON THE STACK IS DEALLOCATED AS PER THEIR SCOPE AND SIMILARLY ALLOCATED AS PER THE FUNCTION BECAUSE THE ADDRESS GIVEN BY THE POINTER IN THE MAIN FUNCTION IS DIFFRENT AND THE ADDRESS GIVEN BY THE POINTER FUNCTION(FUN ) IS DIFFERENT"<<endl;
return 0;
}

#include<iostream>
using namespace std;
void tower(int n , char A , char B , char C)
{ ///base case
    if(n==0)
    {
        return ;
    }
    ///recursive case

    tower(n-1, A,C , B );/// move n-1 disks from A to B
    cout<<"MOVE "<<n<<" DISK FROM "<<A<<" TO "<<C<<endl; /// move nth disk from A to C
    tower(n-1,B, A , C); /// move n-1 disks from B to C

}
int main()
{ int n;
cin>>n;
tower(n ,'A','B','C');
    return 0;
}

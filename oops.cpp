#include<iostream>
#include<cstring>
using namespace std;
class car
{
public:
  int price;
  char name[15];
public:
  /*car(char *n,int p)
  {
      cout<<"making by copy constructor"<<endl;
      name = n;
      p =price;
  }
  */
  void print ()
  {
      cout<<name<<endl;
      cout<<price<<endl;
  }
};
int main()
{
    car A ;
    strcpy( A.name,"audi" );
    A.price = 200;
    A.print();
    car B(A);
    B.print();

    return 0;
}

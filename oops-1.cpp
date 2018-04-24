#include<iostream>
#include<cstring>
using namespace std;
class car
{ private:
  string name;
  int price;
  public:
      void print()
      {
          cout<<name<<" car name"<<endl;
          cout<<price<<"price of car"<<endl;
      }
      void input()
      {   cout<<"what is the name of car"<<endl;
          cin>>name;
          cout<<"what is the price of car"<<endl;
          cin>>price;
      }


};
int main()
{
   car a;
   a.input();
   a.print();

    return 0;
}

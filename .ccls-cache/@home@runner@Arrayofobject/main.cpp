#include <iostream>
using namespace std;
char name[30];
int age;
int i;
class emp 
{
  public:
  void getdata()
  {
    cout<< "Enter Name: ";
    cin>>name;
    cout<< "Enter Age: ";
    cin>>age;
  }
  void putdata()
  {
    cout<< "Name: "<<name<<endl;
    cout<< "Age: "<<age<<endl;
  }
};
int main() 
{
  emp employee[3];
  for(i=0 ; i<3 ; i++)
    {
    employee[i].getdata();
    employee[i].putdata();
    }
  return 0; 
}
#include <iostream>
using namespace std;
class room
{
  public:
   int length;
   int breadth;
   int calculateArea()
   {
    return length* breadth;
   }

};
int main()
{
  room r1;
  r1.length=10;
  r1.breadth=90;
  cout<<"Area of Room "<<r1.calculateArea();

}
#include <iostream>
using namespace std;
  int check (int n)
  {
    const int x=51;
    if (n>x)
    {
        return (n-x)*3;
    }
    else
      {
        return x-n;
      }
    
  }
int main()
{
  cout << check(53) << endl;
  cout << check(30) << endl;
  cout << check(51) << endl;
}

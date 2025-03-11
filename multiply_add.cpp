#include <iostream>
using namespace std;

class calculator
{
    public:
    int add (int a,int b)
    {
      return a + b;
    }
    int multiple (int a,int b)
     {
        return a * b;
     }

};

int main()
{
    int x,y;
    cout << "Enter first number: ";
    cin >> x ;
    cout << "Enter second number: ";
    cin >> y;
    calculator calc;
    cout<<"add:"<<calc.add(x,y);
    cout<<"multi:"<<calc.multiple(x,y);

    return 0;

}

#include<iostream>

using namespace std;
bool test(int a,int b)
{
    return a == 30 || b == 30 || (b + a == 30);
}
int main()
{   
    cout << test(20, 25) << endl;
    cout << test(30, 0) << endl;
    cout << test(0, 25) << endl;
    cout << test(30, 30) << endl;
}

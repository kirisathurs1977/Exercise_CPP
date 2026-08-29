#include <iostream>
using namespace std;

void Swap(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 7;
    int b = 10;
    Swap(&a, &b);
    cout <<"a ="<< a <<endl;
    cout <<"b ="<< b;
  return 0;
}
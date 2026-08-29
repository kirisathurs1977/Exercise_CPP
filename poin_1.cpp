#include <iostream>
using namespace std;

void incr(int *a) {
    (*a)++ ;
  
}
int main() {
    int a = 7;
    incr(&a);
    cout << a;
  return 0;
}
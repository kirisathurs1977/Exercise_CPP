#include <iostream>
#include <list>
 using namespace std;

 
int main() {
    list<int> myList = {10, 20, 30};

    myList.push_back(40);  // {10, 20, 30, 40}
    myList.push_front(5);  // {5, 10, 20, 30, 40}
    auto it = myList.begin();
    advance(it, 2);   // Move iterator to the 3rd position
    myList.insert(it, 15); // Insert 15 at the 3rd position

    for (int value : myList) {
        cout << value << " ";
    }

    return 0;
}

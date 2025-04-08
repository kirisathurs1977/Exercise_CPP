#include <iostream>
#include <vector>

using namespace std;

void printVec(const vector<int>& arr)  // Pass by const reference for efficiency
{
    for (auto it : arr)
    {
        cout << it << " ";  // Added missing semicolon
    }
    cout << endl;  // Print newline for better output formatting
}

int main()
{
    vector<int> numbers(5);
    printVec(numbers);
    return 0;
}

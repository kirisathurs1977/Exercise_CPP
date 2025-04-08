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
    vector<pair<int,int>> vectorpair{{2,3},{3,6},{7,6}};
    //printVec(numbers);
    cout<<vectorpair[1].first;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void printVec(const vector<int>& arr)  // Pass by const reference for efficiency
{
    for (auto it : arr)
    {
        cout << it << " ";  
    }
    cout << endl;  // Print newline for better formatting
}

int main()
{
    vector<int> vec;
    int size;
    
    cin >> size;  // Read the number of elements
    
    for(int i = 0; i < size; i++)  // Corrected loop condition
    {
        int num;
        cin >> num;  // Read input values
        vec.push_back(num);
    }
    
    printVec(vec);  // Print the vector

    return 0;
}

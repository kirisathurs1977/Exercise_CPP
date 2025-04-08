#include <algorithm>   // Include the algorithm header for the sort function
#include <iostream>    // Include the iostream header for input and output operations
#include <vector>      // Include the vector header for using the vector container
using namespace std;   // Use the std namespace to simplify code
bool test(vector<int> nums)
{
    sort(nums.begin(), nums.end());  // Sort the elements of the vector in ascending order
    int last = nums.at(0) - 1;            // Initialize a variable to store the last value, set to one less than the first element
    for (int number : nums) {
        if ((number - last) != 1)          // Check if the current number is not one greater than the last one
            return false;                  // If not, the numbers are not consecutive, so return false
        last = number;                     // Update the last value to the current number for the next iteration
    }
    return true;                           // If all numbers are consecutive, return true
}
int main(){
    vector<int> nums = {1, 2 ,5, 7, 4, 3, 6};  // Initialize a vector with a set of integers
    //vector<int> nums = {1, 2 ,5, 0, 3, 6, 7};  // Another set of integers for testing
    for (int x : nums)
        cout << x << " ";                 // Print each element of the vector
    cout << "\nCheck consecutive numbers in the said vector! "<< test(nums) << endl;   // Check and display if the numbers are consecutive
}

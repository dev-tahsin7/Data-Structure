#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector capacity 
    vector <int> v(5); 
    cout << v.size() << endl;  // Returns the size of the vector.

    cout << v.max_size() << endl; // Returns the maximum size that the vector can hold.

    cout << v.capacity() << endl; // Returns the current available capacity of the vector.

    // cout << v.clear() << endl; Clears the vector elements. Do not delete the memory, only clear the value.

    cout << v.empty() << endl; // Return true/false if the vector is empty or not.

    // cout << v.resize(2) << endl; // Change the size of the vector.

    return 0;
}
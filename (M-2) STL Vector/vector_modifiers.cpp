#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector modifiers
    // assign - 1 
    vector <int> v = {1,2,3,4,5}; 
    vector <int> v1; 
    v1 = v; 
    // or 
    // v1.assign(v); 

    // Add an element to the end.
    v.push_back(6); 

    //Remove the last element
    v.pop_back(); 

    // insert elements at a specific position.
    v.insert(v.begin() + 2, 8); 

    // v.erase(); // Delete elements from a specific position.

    // replace(v.begin(), v.end(), value, replace_value) -> not under vector
    replace(v.begin(), v.end(), 8, 9); 

    // find(v.begin(),v.end(),V) not under vector 

    for(int x : v){
        cout << x << " " ; 
    }
    return 0;
}
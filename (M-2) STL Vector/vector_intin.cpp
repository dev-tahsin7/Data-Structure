#include <bits/stdc++.h>
using namespace std;

int main() {
    // Vector initialization 
    // type-1 [vector <type> name]
    vector <int> v; 

    // type -2 
    vector <int> v1(5); // numbers of elements

    // type -3 
    vector <int> v2(5, 1); // numbers of elements and value 

    // for(int i = 0; i < 5; i++){
    //     cout << v2[i] << endl; 
    // }

    // type - 4 
    vector <int> v3(v2); // copy another vector 
    for(int i = 0; i < 5; i++){
        cout << v3[i] << endl; 
    }

    // type - 5 
    int arr[5] = {1,2,3,4,5}; 
    vector <int> v4(arr, arr+5); // copying a elements into vector with starting and ending
    for(int i = 0; i < 5; i++){
        cout << v4[i] << endl; 
    } 

    
    return 0;
}
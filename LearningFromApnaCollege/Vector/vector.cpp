#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec = {1, 2, 3, 4, 5};

    cout<<vec[0] << endl; // Accessing first element

    for(int val: vec){
        cout << val << " "; // Printing all elements
    }
    cout << endl;

}
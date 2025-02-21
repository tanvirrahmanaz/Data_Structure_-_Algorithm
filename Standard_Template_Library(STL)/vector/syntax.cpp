#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec(5,0);//(5,0) --> 5 is size of the vector, 0(index value )
    
    vector<int> value = {'a','b','c','d','e'};
    for(char val: value){
        cout<< val <<endl;
    }
    cout<<vec[0];
    return 0;
}
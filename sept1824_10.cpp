#include <iostream>
#include <vector>

using namespace std;

int main(){

    cout << "CAHPTER 9 - VECTORS IN C++" << endl;

    cout << "Here we can use STL (standard templte library)" << endl;


cout << "********* VECTOR INITIALIZE AND DISPLAY *********" << endl; 
    // vector<int> vec;  //size 0 
    vector<int> vec2 = {1,2,3};
    vector<char> vec4 = {'a','b','c','d','e'};
    // cout << vec2[0] << endl;

    // vector<int> vec3(3,0);
    // cout << vec3[0] << endl;
    // cout << vec3[1] << endl;
    // cout << vec3[2] << endl;
    // cout << vec3[3] << endl;
    // cout << endl;

    // for(int i : vec2){
    //     cout << i << endl; 
    // }

    // cout << endl;

    // for(char i : vec4){
    //     cout << i << endl;
    // }

cout << "********* VECTOR FUNCTIONS **************" << endl;

// 1 size()
    cout << "Size = " << vec4.size() << endl;
    cout << endl;
// 2 push_back()
    cout << "Before inserting" << endl;
    cout << "Size = " << vec2.size() << endl;
    cout << "After inserting" << endl;
    vec2.push_back(123);
    vec2.push_back(783);
    vec2.push_back(45);
    cout << "Size = " << vec2.size() << endl;
    cout << endl;
    for(int i : vec2){
        cout << i << " ";
    }

// 3. pop_back()

    cout << endl;
    vec2.pop_back();
    cout << "Size after poping = " << vec2.size() << endl;
    for (int i : vec2){
        cout  << i << " ";
    }
    cout << endl;

// 4.front()

    cout << endl;
    cout << "First element of the vector = " << vec2.front() << endl;

// 5.back()

    cout << endl;
    cout << "Last element of the vector = " << vec2.back() << endl;
    cout << endl;

// 6.at()

    cout << "Value at that particlar index" << endl;
    cout << vec2.at(3) << endl;
    cout <<endl;

cout << "************** CAPACITY OF VECTOR ***************" << endl;
    vector<int> vec6 = {0};
    cout << "ELement at index 0 : "<< vec6[0] <<endl;
    cout << "Size of vector 6 = " << vec6.size() << endl;
    cout << "Capacity of vector 6 = " << vec6.capacity() << endl;

    cout << endl << "After inserting element " << endl;
    vec6.push_back(98);

    cout << endl << "Size of vector 6 = " << vec6.size() << endl;
    cout << "Capacity of vector 6 = " << vec6.capacity() << endl;

    vec6.push_back(65);
    cout << endl << "Size of vector 6 = " << vec6.size() << endl;
    cout << "Capacity of vector 6 = " << vec6.capacity() << endl;

    cout << endl;
    cout << (2^4^1^2^1) << endl;

    



    return 0;

}
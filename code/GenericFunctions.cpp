#include <iostream>
#include <vector>
#include <string>

using namespace std; // used to avoid prefixing elements with std::

template <typename T, typename U>
string demoGenerics(vector<T> lst1, vector<U> lst2){
    if (lst1.size() > lst2.size()) {
        return "yes";
    } else {
        return "no";
    }}

// string demoGenerics(vector<int> lst1, vector<int> lst2){
//    return "Demo overloading!";
//}

int main() {
    vector<int> int1 = {1, 2, 3};
    vector<int> int2 = {1, 2, 3, 4, 5};
    vector<string> string1 = {"aaa", "bbb", "ccc", "ddd"};
    
    cout << "These are examples on how we can use generics in C++:" << endl;
    cout << "\nCalling demoGenerics with two vector<int>:" << endl;
    cout << "\tIs the size of {1, 2, 3} bigger than {1, 2, 3, 4, 5}? " << demoGenerics(int1, int2) << endl;
    cout << "\nCalling demoGenerics with one vector<int> and one vector<string>:" << endl;
    cout << "\tIs the size of {1, 2, 3, 4, 5} bigger than {\"aaa\", \"bbb\", \"ccc\", \"ddd\"}? " << demoGenerics(int2, string1) << endl;

    return 0;
}
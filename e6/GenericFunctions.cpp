#include <iostream>
#include <vector>
#include <string>

using namespace std; // used to avoid prefixing elements with std::

template <typename T>
int demoGenerics(vector<T> lst){
    return lst.size();
}

template <typename T, typename U>
string demoMultGenerics(vector<T> lst1, vector<U> lst2){
    if (lst1.size() > lst2.size()) {
        return "yes";
    } else {
        return "no";
    }
}


int main() {
    vector<int> int1 = {1, 2, 3};
    vector<int> int2 = {1, 2, 3, 4, 5};
    vector<string> string1 = {"aaa", "bbb", "ccc", "ddd"};
    cout << "Size of {1, 2, 3} is " << demoGenerics(int1) << endl;
    cout << "Size of {\"aaa\", \"bbb\", \"ccc\", \"ddd\"} is " << demoGenerics(string1) << endl;
    
    cout << "Is the size of {1, 2, 3} bigger than {1, 2, 3, 4, 5}? " << demoMultGenerics(int1, int2) << endl;
    cout << "Is the size of {1, 2, 3, 4, 5} bigger than {\"aaa\", \"bbb\", \"ccc\", \"ddd\"}? " << demoMultGenerics(int2, string1) << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class TwoD
{
public:
    vector<T> x;
    vector<T> y;
    TwoD(vector<T> val1, vector<T> val2)
    {
        x = val1;
        y = val2;
    }
    void swap()
    {
        vector<T> temp = x;
        x = y;
        y = temp;
    }
    void replacex(vector<T> newx)
    {
        x = newx;
    }
};

int main()
{
    TwoD<int> myints({1, 2, 3, 4, 5}, {6, 7, 8});
    TwoD<string> mystrings({"abcd", "efg"}, {"qrs", "tuv", "wx", "yz"});
    cout << "myints is:\n x:[ ";
    for (int i : myints.x)
    {
        cout << i << " ";
    }
    cout << "], y:[ ";
    for (int i : myints.y)
    {
        cout << i << " ";
    }
    cout << "]\n"
         << "mystrings is:\n x:[ ";
    for (string i : mystrings.x)
    {
        cout << i << " ";
    }
    cout << "], y:[";
    for (string i : mystrings.y)
    {
        cout << i << " ";
    }

    myints.swap();
    mystrings.replacex({"hijk", "lm", "no", "p"});

    cout << "]\nmyints after swapping:\n x:[ ";
    for (int i : myints.x)
    {
        cout << i << " ";
    }
    cout << "], y:[ ";
    for (int i : myints.y)
    {
        cout << i << " ";
    }
    cout << "]\n"
         << "mystrings after replacing x:\n x:[ ";
    for (string i : mystrings.x)
    {
        cout << i << " ";
    }
    cout << "], y:[ ";
    for (string i : mystrings.y)
    {
        cout << i << " ";
    }
    cout << "]";
    return 0;
}
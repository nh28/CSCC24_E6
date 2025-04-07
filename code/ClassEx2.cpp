#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T, typename U>
class TwoVec
{
public:
    int id;
    vector<T> x;
    vector<U> y;

    TwoVec(int newid, vector<T> val1, vector<U> val2)
    {
        x = val1;
        y = val2;
        id = newid;
    }
    void replacexy(vector<T> otherx, vector<U> othery)
    {
        x = otherx;
        y = othery;
    }
    void changeid(int newid)
    {
        id = newid;
    }
    void addid(int other)
    {
        id += other;
    }
};

int main()
{
    TwoVec<int, string> multi(1234, {12, 34, 5, 6789}, {"foo", "bar", "foobar"});
    cout << "multi is:\nid: " << std::to_string(multi.id) << "\nx:[ ";
    for (int i : multi.x)
    {
        cout << i << " ";
    }
    cout << "], y:[ ";
    for (string i : multi.y)
    {
        cout << i << " ";
    }
    cout << " ]\n";
    multi.replacexy({123}, {"foobar"});
    multi.addid(1111);
    cout << "new multi is:\nid: " << std::to_string(multi.id) << "\nx: [ " << multi.x[0] << " ], y: [ " << multi.y[0] << " ]";
    return 0;
}
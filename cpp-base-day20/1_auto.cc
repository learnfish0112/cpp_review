#include "cpp_common/common.h"

using namespace std;

int main()
{
    vector<int> vec(10, 1);
    //use auto -> get variable value, can not change vec element
    //use auto& -> get pointer, but why pointer no need * can assignment? use reference in real
    for(auto &elem : vec) {
        cout << elem << endl;
        elem = 10;
    }

    cout <<  "second" << endl;
    for(auto &elem : vec) {
        cout << elem << endl;
    }

    return 0;
}


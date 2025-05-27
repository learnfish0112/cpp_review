#include "cpp_common/common.h"

using namespace std;

int main()
{
    vector<int> vec(10, 1);
    //use auto effect is same, why?
    for(auto &elem : vec) {
        cout << elem << endl;
    }

    return 0;
}


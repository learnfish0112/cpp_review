#include "cpp_common/common.h"

using namespace std;

int main()
{
    map<int, string> map1 = {
        make_pair(8, "hefei")
    };

    for(auto elem : map1) {
        cout << elem.first << " " << elem.second << endl;
    }
    cout << "map[8]" << map1[8] << endl;
    cout << "map[4]" << map1[4] << endl;
    for(auto elem : map1) {
        cout << elem.first << " " << elem.second << endl;
    }

    return 0;
}


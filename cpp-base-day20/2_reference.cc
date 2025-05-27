#include "cpp_common/common.h"

using namespace std;

int main()
{
    int a = 1;
    int &b = a;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 2;
    cout << "after change b" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}


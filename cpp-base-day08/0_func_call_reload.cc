#include "cpp_common/common.h"

using namespace std;

class Example {
public:
    int operator()(int x, int y, int z) {
        cout << "x + y + z= " << x + y + z << endl;
        return x + y + z;
    }

    int operator()(int x, int y) {
        cout << "x + y = " << x + y << endl;
        return x + y;
    }
};

int main()
{
    Example ex;
    ex(1, 2, 3);
    ex(1, 2);

    return 0;
}


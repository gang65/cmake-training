
#include <iostream>
#include "multiple.hpp"

using namespace std;

int main()
{
    cout << "Multiplication table" << endl;

    int max_x = 10, max_y = 10;
    cout << endl;
    for (int x = 1; x < max_x + 1; ++x)
    {
        for (int y = 1; y < max_y + 1; ++y)
        {
            cout << x << "x" << y << "=" << mul(x, y) << "\t";
        }
        cout << endl;
    }
}

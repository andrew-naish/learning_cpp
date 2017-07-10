#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    auto a = add(3,4);
    cout << "3 + 4 is " << a;

    cout << endl;

    auto b = add(1.3, 4.7);
    cout << "1.3 + 4.7 is " << b;

    cout << endl;

    auto c = add(1.2, 3.4, 6.9);
    cout << "overloaded!! is: " << c;

    cout << endl;
    cout << endl;

    // bad practice, but demonstrating possibility
    bool aa = test(false);
    if (aa) { cout << "passed"; }
    else { cout << "not true, it fails"; }
    
    cout << endl;

    bool bb = test(-4.4);
    if (bb) { cout << "more than zero"; }
    else { cout << "that's a negative.."; }

    return 0;
}  
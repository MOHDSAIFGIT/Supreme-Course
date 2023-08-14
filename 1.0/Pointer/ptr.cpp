#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    // pointer create
    int *ptr = &a;

    // access the value is pointing to
    cout << *ptr << endl;

    return 0;
}
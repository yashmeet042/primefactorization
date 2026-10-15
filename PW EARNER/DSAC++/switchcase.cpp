#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter a number=";
    cin >> n;

    switch (n)
    {
    case1:
        cout << "sunday";
        break;
    case2:
        cout << "monday";
        break;
    case3:
        cout << "tuesday";
        break;
    case4:
        cout << "wednesday";
        break;
    case5:
        cout << "thursday";
        break;
    case6:
        cout << "friday";
        break;
    case7:
        cout << "saturday";
        break;
    default:
        cout << "invalid day";
        break;
    }
    return 0;
}
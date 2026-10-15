// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "Enter a number=";
//     cin >> n;

//     for (int i = n; i >= 1; i--)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter nth term number=";
    cin >> n;

    for (int i = 2; i <= n; i += 3)
    {
        cout << i << " ";
    }
    return 0;
}
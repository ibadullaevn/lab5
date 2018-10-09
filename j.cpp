#include <iostream>

using namespace std;

int main()
{
    int x, n, y;
    cin >> x >> n >> y;
    if(x*n<y)
    cout << "No";
    if (x*n>y)
    cout << "Yes";
    if(x*n==y)
    cout << "No difference";
return 0;
}
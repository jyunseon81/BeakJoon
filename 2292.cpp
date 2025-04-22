#include <iostream>

using namespace std;

int main ()
{
    int N;
    int count = 1;
    int layer = 1;

    cin >> N;

    while ( N > count)
    {
        count += 6 * layer;
        layer++;
    }
    cout << layer;

}

#include <iostream>
#include <stack>

using namespace std;

int main () 
{
    stack<int> s;
    int k;
    int num;
    int sum = 0;

    int stackSize;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> num;
        
        if (num == 0)
            s.pop();
        else
            s.push(num);
    }

    stackSize = s.size();
    for (int i = 0; i < stackSize; i++)
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}

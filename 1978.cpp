#include <iostream>

using namespace std;

int main ()
{
    int N, temp;
    int count = 0;
    int result = 0;

    cin >> N;

    for ( int i = 0; i < N; i++)
    {
        cin >> temp;
        for ( int j = 1; j <= temp; j++)
        {
            if (temp%j == 0)
                count++;
        }
        if (count == 2)
            result++;
        count = 0;
    }
    cout << result;
    
}

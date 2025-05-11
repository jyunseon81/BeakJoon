#include <iostream>

using namespace std;

#define MAX 10

class Stack
{
public:
    int stack[MAX];
    int top = -1;

    bool push(int value)
    {
        stack[++top] = value;
        return true;

    }

    int pop ()
    {
        if (!isEmpty())
        {
            return stack[top--];
        }else
        {
            return -1;
        }
    }

    int size ()
    {
        return top + 1;           
    }    

    bool isEmpty()
    {
        return top == -1;
    }

    int Top()
    {
        if(!isEmpty())
            return stack[top];
        else
            return -1;
    }
};

int main ()
{
    Stack s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push")
        {
            int val;
            cin >> val;
            s.push(val);
        }
        else if (cmd == "pop")
            cout << s.pop() << '\n';
        else if (cmd == "size")
            cout << s.size() << '\n';
        else if (cmd == "empty")
            cout << s.isEmpty() << '\n';
        else if (cmd == "top")
            cout << s.Top() << '\n';
    }
}

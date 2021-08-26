#include <stack>
#include <iostream>

using namespace std;

stack<int> s1;
stack<int> s2;

void enqueue(int n)
{
    s1.push(n);
}

int dequeue()
{
    int n;
    while(!s1.empty())
    {
        n=s1.top();
        s2.push(n);
        s1.pop();
    }
    n=s2.top();
    s2.pop();
    return n;
}

int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int input;
        cin >> input;
        enqueue(input);
    }

    for (int i=0; i<n; i++) {
        cout << dequeue() << endl;
    }

    return 0;
}

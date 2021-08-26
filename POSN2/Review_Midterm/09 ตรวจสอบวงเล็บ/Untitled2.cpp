#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

int check_balance_bracketing(string line)
{
    stack<char> wongleb;
    int num=line.length(),i,check=0;
    for(i=0;i<num;i++)
    {
        if(line[i]=='[')
            wongleb.push(line[i]);
        else if(line[i]=='(')
            wongleb.push(line[i]);
        else if(line[i]=='{')
            wongleb.push(line[i]);
        else if(line[i]==')')
        {
            if(wongleb.top()=='(')
            {
                wongleb.pop();
                check=1;
            }
            else
                return 0;
        }
        else if(line[i]==']')
        {
            if(wongleb.top()=='[')
            {
                wongleb.pop();
                check=1;
            }
            else
                return 0;
        }
        else if(line[i]=='}')
        {
            if(wongleb.top()=='{')
            {
                wongleb.pop();
                check=1;
            }
            else
                return 0;
        }
    }
    return check;
}

int main()
{
    string line;
    getline(cin, line);
    cout << check_balance_bracketing(line) << endl;
    return 0;
}

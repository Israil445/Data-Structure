#include<bits/stdc++.h>
using namespace std;

stack<char>ops;
stack<int>values;
string infix;

int precedence(char symbol)
{
    switch(symbol)
    {
    case '^':
        return 3;

    case '/':
        return 2;

    case '*':
        return 2;

    case '+':
        return 1;

    case '-':
        return 1;

    default:
        return 0;


    }
}

int operation(int v1,int v2,char symbool)
{
    if(symbool=='+')
    {
        return v1+v2;
    }
    else if(symbool=='-')
    {
        return v1-v2;
    }
    else if(symbool=='*')
    {
        return v1*v2;
    }

    else if(symbool=='/')
    {
        return v1/v2;
    }
    else
    {
        return pow(v1,v2);
    }

}

int main()
{

    cin>>infix;

    for(int i=0; i<infix.size(); i++)
    {
        if(infix[i]=='(')
        {
            ops.push(infix[i]);
        }
        else if(isdigit(infix[i]))
        {

            values.push(infix[i]-'0');
        }

        else if(infix[i] == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int v2 = values.top();
                values.pop();

                int v1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(operation(v1, v2, op));
            }
            if(!ops.empty())
                ops.pop();
        }

        else
        {

            while(!ops.empty() && precedence(ops.top()) >= precedence(infix[i]))
            {
                int v2 = values.top();
                values.pop();

                int v1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(operation(v1, v2, op));
            }

            ops.push(infix[i]);
        }

    }

    while(!ops.empty())
    {
        int v2 = values.top();
        values.pop();

        int v1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(operation(v1, v2, op));
    }

    cout<<values.top()<<endl;





    return 0;
}
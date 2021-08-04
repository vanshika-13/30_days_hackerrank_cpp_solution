#include <bits/stdc++.h>

using namespace std;

class Solution
{
    //Write your code here
    /*
    stack<char> s;
    queue<char> q;
    public:
     void pushcharachter(char ch)
     {
         s.push(ch);
     }
     void enqueueCharacter(char ch) 
     {
         q.push(ch);
     }
     char popCharacter() 
     {
         char top=s.top();
         s.pop();
         return top;
     }
     char dequeueCharacter() 
     {
         char front=q.front();
         q.pop();
         return front;
     }
     
    */
    std::stack<char> mystack;
    std::queue<char> myqueue;

public:
    void pushCharacter(char ch)
    {
        mystack.push(ch);
    }

    void enqueueCharacter(char ch)
    {
        myqueue.push(ch);
    }

    char popCharacter()
    {
        char top = mystack.top();
        mystack.pop();
        return top;
    }

    char dequeueCharacter()
    {
        char front = myqueue.front();
        myqueue.pop();
        return front;
    }
};

int main()
{
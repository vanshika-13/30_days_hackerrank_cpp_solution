#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class Calculator
{
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0)
        {
            throw invalid_argument("n and p should be non-negative");
        }

        return pow(n, p);
    }
};
/*
class calculator {
    public:
    int power(int n,int p)
    {
        if(n<0 || p<0)
        {
            throw invalid_argument("n and p should be non-negative");
            }
            return pow(n,p);
    }
        
            */
//Write your code here

int main()
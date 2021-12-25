#include<iostream>
using namespace std;

class function_overloading
{

public:
    function_overloading(/* args */);
    add(int x, int y);
    add(int x, int y, int z);
    ~function_overloading();
};

function_overloading::function_overloading(/* args */)
{
    cout << "Hey" << endl;
}
function_overloading::  add(int x, int y)
{
    return x+y;
}
function_overloading::  add(int x, int y, int z)
{
    return x+y+z;
}

function_overloading::~function_overloading()
{
}

int main()
{
    function_overloading obj1;

    cout << "Function 1: " << obj1.add(2,3) << ", " << "Function 2: " << obj1.add(2,3,4) << endl;
    return 0;
}


#include<iostream>
using namespace std;

class function_overriding
{

public:
    function_overriding() {}
   
    void print(){
        cout << "Hey I am from class function overriding..." << endl;
    }

    ~function_overriding() {}
};

class derive: public function_overriding{
    public:
    derive(){}
    void  print(){
        cout << "Hey I am from class derive..." << endl;
    }
    ~derive(){}
};

int main()
{
    derive derive1;
    derive1.print();
   
    return 0;
}


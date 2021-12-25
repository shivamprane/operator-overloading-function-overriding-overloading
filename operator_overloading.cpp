//multiply 2 complex numbers

#include<iostream>
using namespace std;
  
class Complex {
    int real; 
    int img;
    int rmul1;
    int rmul2;
    int imul1;
    int imul2;
public:
    Complex( int r=0, int i=0)  
    {
        real = r;
        img = i;
    }

    Complex operator * (Complex obj) {
         Complex result;
         result.rmul1 = real * obj.real;
         result.rmul2 = img * obj.img;
         result.imul1 = real * obj.img;
         result.imul2 = img * obj.real;
         result.real = result.rmul1 - result.rmul2;
         result.img = result.imul1 + result.imul2;
         return result;
    }

    void display() 
    {
         cout << real << " + i" << img << endl; 
         }
};

int main()
{
    Complex com1(3, -2), com2(-4, 3), com3;
    com3 = com1 * com2;
    com3.display();
    return 0;
}

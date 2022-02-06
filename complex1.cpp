#include<iostream>
using namespace std;

class Complex
{
private:
    int real,img;
public:
    Complex():real(0),img(0){}
    Complex(int a):real(a),img(a){}
    Complex(const Complex &b):real(b.real),img(b.img){}
    int getR()
    {
        return this->real;
    }
    int getI()
    {
        return this->img;
    }
};
int main()
{
    Complex c1 ;
    Complex c2(2);
    Complex c3(c2);
    cout<<"c2 = "<<c2.getR()<<" + "<<c2.getI()<<"i";
}

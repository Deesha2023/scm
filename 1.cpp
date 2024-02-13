#include<iostream>
using namespace std;
class Complex
{
private:
int a,b;
public:

void setdata(int x,int y)
{ a = x;
b = y;
}
void showdata()
{
cout<<"a = "<<a<<"b = "<<b;
}
friend void fun(Complex);
};
// friend function definition
void fun(Complex c1)
{
cout<<"SUM IS "<<c1.a+c1.b;
}
int main()
{
//clrscr();
Complex c1;
c1.setdata(4,5);
c1.showdata();
fun(c1);
return 0;
//getch();
}
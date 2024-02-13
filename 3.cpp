#include<iostream>
//#include<conio.h>
using namespace std;
class stat1
{
int code;
static int count;
public:
stat1() {
code = ++count;
}
void showcode() {
cout << "\n\tObject number is :" << code;
}
static void showcount() {
cout << "\n\tCount Objects :" << count;
}
};
int stat1::count;
int main() {
//clrscr();
stat1 obj1, obj2,obj3,obj4;
obj1.showcount();
obj1.showcode();
obj2.showcount();
obj2.showcode();
obj3.showcount();
obj3.showcode();
obj4.showcount();
obj4.showcode();
return 0;
//getch();
}
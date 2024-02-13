#include<iostream>
using namespace std;
class employee
{
    private:
    int a;
    protected:
    int b;
    public:
        int c;
        read()
        {cout<<"ENTER A AND B";
        cin>>a;
        cin >> b;}
        write()
        {cout<<" A is "<<a<<"B is "<<b;}
};
int main()
{
    employee e;
    cout<<"WELCOME";
    e.c = 5;
    cout<<e.c;
    e.read();
    e.write();
    return 0;
}
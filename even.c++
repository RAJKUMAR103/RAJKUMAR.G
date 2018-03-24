#include<iostream>
using namespace std;
class check
{
    public:
    int a,b,c,d;
    void putdata()
    {
        cout<<"enter a,b values:";
        cin>>a>>b;
    }
    void showdata()
    {
        c=a*b;
        if(c%2==0)
        cout<<"even";
        else
        cout<<"odd";
    }
};
int main()
{
    check r;
    r.putdata();
    r.showdata();
    return 0;
}

#include <iostream>
using namespace std;
void initialize( int& x, int& y, char& z);
void getHoursRat (double& hours, double& rate);
int main()
{
    int x, y;
    char z='a';
    double rate, hours;
    double amount;
    cout<<x<<' '<<y<<" w:"<<z<<":w"<<endl;
    cout<<hours<<' '<<rate<<endl;
    initialize(x,y,z);
    getHoursRat(hours, rate);
    cout<<x<<' '<<y<<" w:"<<z<<":w"<<endl;
    cout<<hours<<' '<<rate<<endl;
    system ("pause");
    return 0;
}
void initialize( int& x, int& y, char& z)
{
    x=0;
    y=0;
    z=' ';
}
void getHoursRat (double& hours, double& rate)
{
    cout<<"Include hours:";
    cin>>hours;
    cout<<"Include rate:";
    cin>>rate;
}
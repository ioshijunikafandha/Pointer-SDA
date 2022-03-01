#include <iostream>
using namespace std;
//IoshiJunikaFandha
//G1A021026
//Table1

int main ()
{
    int a, b, c;
    int *p1, *p2, *p3;

    a = 10 ;
    cout<<"a= "<< a <<endl;
    b = 15 ;
    cout<<"b= "<< b <<endl;
    p1 = &b ;
    cout<<"p1 = "<<&b<<endl;
    p2 = p1 ;
    cout<<"p2 = "<<p1<<endl;
    c = 27 ;
    cout<<"c= "<< c <<endl;
    p1 = &c ;
    cout<<"p1 = "<<&c<<endl;
    a = *p1 ;
    cout<<"a = "<<*p1<<endl;
    p3 = &b;
    cout<<"p3 = "<<&b<<endl;
    *p2 = 8;
   cout<<"*p2 = 8"<<endl;

}
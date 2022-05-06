#include<iostream>
using namespace std;

int main()
{
    int* p;
    int a;
    p=&a;
    
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<endl;

    a=5;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<endl;

    *p=8;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    cout<<endl;
    int b=20;
    *p=b; //The address in p does not change to point b 
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    cout<<"Pointer Arithmetic"<<endl;

    int d=5;
    int *p1;
    p1=&d;
    cout<<p<<endl; //if address of p is 200
    cout<<*p<<endl; 
    cout<<p+1<<endl; // then p+1 means 200+4=204
    cout<<*(p+1)<<endl;


    int a1=1025;
    int *p2;
    p2=&a1;
    cout<<"Address = "<<int(p2)<<" "<<"Value = "<<int(*p2)<<endl;
    cout<<"Address = "<<int(p2+1)<<" "<<"Value = "<<int(*p2+1)<<endl;
    char *c0;
    c0=(char *)p2;  //typecasting
    cout<<sizeof(char)<<endl;
    cout<<"Address = "<<int(c0)<<" "<<"Value = "<<int(*c0)<<endl;
    cout<<"Address = "<<int(c0 + 1)<<" "<<"Value = "<<int(*c0+1)<<endl; 

    cout<<"Pointer to Pointer"<<endl;
    int x=5;
    int *p4=&x;
    *p4=6;
    int **q=&p4;
    int ***r = &q;

    cout<<*p4<<endl; 
    cout<<*q<<endl;  
    cout<<**q<<endl; //*(*q) both are same
    cout<<*(*r)<<endl;
    cout<<*(*(*r))<<endl;
    ***r=100;
    cout<<"x= "<<x<<endl;
    **q=*p4 + 2;
    cout<<"x= "<<x<<endl;

    return 0;
}

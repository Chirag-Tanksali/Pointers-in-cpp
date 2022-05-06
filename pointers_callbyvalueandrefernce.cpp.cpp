#include<iostream>
using namespace std;

// //Call by value 
// int Increment(int a){
//     a=a+1;
//     cout<<"Address of a in increment function is "<<int(&a)<<endl;
//     return a;
// }
// int  main(){
//     int a=10;
//     Increment(a);
//     cout<<"Address of a in main function is "<<int(&a)<<endl;
//     cout<<a<<endl;

//     return 0;
// }

//Call by Reference
void Increment(int *x){
    *x=*x+1;
    cout<<"Address of x in increment function is "<<int(&x)<<endl;
}
int  main(){
    int a=10;
    Increment(&a);
    cout<<"Address of a in main function is "<<int(&a)<<endl;
    cout<<a<<endl;
    
    return 0;

}

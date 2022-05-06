#include<iostream>
#include<string>
using namespace std;

int main() {

int a[5];

for(int i=0;i<5;i++){
    cin>>a[i];
}

cout<<endl;
int *p=a;
cout<<int64_t(p)<<endl;
for(int i=0;i<5;i++){
    cout<<*(p+i)<<" ";
}

return 0;
}
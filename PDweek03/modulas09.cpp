#include <iostream>
using namespace std;
main(){
int res;
int number;
int a;
int b;
int c;
int d;
cout<<"Enter four digit number";
cin>>number;
a=number%10;
b=(number/10)%10;
c=(number/100)%10;
d=(number/1000)%10;
res=a+b+c+d;
cout<<res;
}
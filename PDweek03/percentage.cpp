#include <iostream>
using namespace std;
main(){
float A1;
float A2;
float A3;
float A4;
float A5;
float percentage;
string student_name;
cout <<"Enter student name ";
cin >>student_name;
cout<<"Enter marks 1 ";
cin>>A1;
cout <<" Enter marks 2 ";
cin>>A2;
cout<<"Enter marks 3 ";
cin>>A3;
cout<<"Enter marks 4 ";
cin>>A4;
cout<<"Enter marks 5 ";
cin>>A5;
percentage=A1+A2+A3+A4+A5/500*100;
cout<<student_name <<"'s percentage is " <<percentage; 
}
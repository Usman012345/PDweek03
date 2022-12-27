#include <iostream>
using namespace std;
main(){
int time;
float initial_velocity;
int acceleration;
float final_velocity;
cout<<" Enter initial velocity ";
cin>> initial_velocity;
cout<<" Enter time taken ";
cin>> time;
cout<<" Enter acceleration ";
cin >>acceleration;
system("cls");
final_velocity= acceleration/time + initial_velocity;
cout<<"Ther final velocity is "<< final_velocity;
}
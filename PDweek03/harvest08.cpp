#include <iostream>
using namespace std;
main(){
float price_of_vegetables;
float price_of_fruits;
float rupees;
float earning_in_coins;
int kilo_of_vegetables;
int kilo_of_fruits;
cout<<"Enter price of vegetables ";
cin>>price_of_vegetables;
cout<<"Enter price of fruits ";
cin>>price_of_fruits;
cout<<"Enter kgs of vegetables ";
cin>>kilo_of_vegetables;
cout<<"Enter kgs of fruits ";
cin>>kilo_of_fruits;
earning_in_coins=price_of_vegetables*kilo_of_vegetables+price_of_fruits*kilo_of_fruits;
rupees=earning_in_coins/1.94;
cout<<"your earning is "<<rupees;
}
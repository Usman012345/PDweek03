#include <iostream>
using namespace std;
main(){
string name;
float adult_ticket_price;
float child_ticket_price;
float adult_tickets_sold;
float total_profit;
float child_tickets_sold;
float percentage_of_amount_donated;
float amount_donated;
float amount_remaining;
cout<<"Enter movie name ";
cin>> name;
cout<<"enter price of adult tickets ";
cin>>adult_ticket_price;
cout<<"Enter price of child tickets ";
cin>>child_ticket_price;
cout<<"Enter no of adult tickets sold ";
cin>>adult_tickets_sold;
cout<<"Enter no of child tickets sold ";
cin>>child_tickets_sold;
total_profit=adult_tickets_sold*adult_ticket_price+child_tickets_sold*child_ticket_price;
cout<<"Enter percentage of amount donated ";
cin>>percentage_of_amount_donated;
amount_donated=percentage_of_amount_donated/100*total_profit;
amount_remaining=total_profit-amount_donated;
cout<<"The total profit is " <<total_profit <<endl;
cout<<"The amount after donation is " <<amount_remaining;
}

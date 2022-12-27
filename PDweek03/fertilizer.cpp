#include <iostream>
using namespace std;
main(){
float pound;
float square_foot;
float price;
float price_per_pound;
float price_per_square_foot;
float no_of_square_feet_covered_by_bag;
cout<<" Enter size of bag in pounds ";
cin>> pound;
cout<<"Enter Square feet covered by fertilizer per pound ";
cin>>square_foot;
cout<<"Enter price of fertilizer ";
cin>>price;
cout<<"_____________________________________________________________" << endl;
price_per_pound=price/pound;
no_of_square_feet_covered_by_bag=pound*square_foot;
price_per_square_foot=price/no_of_square_feet_covered_by_bag;
cout<<"The cost of fertilizer per pound is " <<price_per_pound <<endl;
cout<<"The price of fertilizer per square feet " <<price_per_square_foot;

}
#include <iostream>
using namespace std;
main()
{

string movie;
int atp;
int ctp;
int ats;
int cts;
float percentage_donate;
int tatp;
int tctp;
int totalamount;
int amount_after_donation;

cout <<"enter movie:";
cin >>movie;
cout << "enter atp:";
cin >> atp;
cout << "enter ctp:";
cin >> ctp;
cout << "enter ats:";
cin >> ats;
cout <<" enter cts:";
cin >> cts;
cout <<" enter percentage_donate:";
cin >> percentage_donate;
tatp= atp*ats;
tctp= ctp*cts;
totalamount=tatp+tctp;
cout << "totalamount:";
cout <<totalamount;
percentage_donate=(totalamount*10)/100;
amount_after_donation=totalamount-percentage_donate;
cout <<"amount_after_donation:";
cout <<amount_after_donation;



















}

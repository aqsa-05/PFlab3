#include <iostream>
using namespace std;
main()
{double bit;
double kiloByte;
double byte;
double megaByte;

cout <<"Enter bit:";
cin >> bit;
byte = bit/8;
cout <<bit <<"bit = "<<byte;
kiloByte = byte/1024;
cout <<bit<<"bit = "<<kiloByte;
megaByte = kiloByte/1024;
cout <<bit<<"bit = " <<megaByte;}
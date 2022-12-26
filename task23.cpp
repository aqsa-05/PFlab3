#include <iostream>
using namespace std;
main()
{int initialVelocity;
int acceleration;
int time;
int finalVelocity;
cout <<"Enter initialVelocity:";
cin >> initialVelocity;
cout << "Enter acceleration:";
cin >> acceleration;
cout <<"Enter time:";
cin >> time;
 finalVelocity = (acceleration*time) +initialVelocity;
cout << finalVelocity;}
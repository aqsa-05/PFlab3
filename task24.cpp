#include <iostream>
using namespace std;
main()
{string name;
int subjectOne;
int subjectTwo;
int subjectThree;
int subjectFour;
int subjectFive;
float sum;
float percentage;
cout <<"Enter name:";
cin >> name;
cout <<"Enter subjectOne:";
cin >> subjectOne;
cout <<"Enter subjectTwo:";
cin >> subjectTwo;
cout <<"Enter subjectThree:";
cin >> subjectThree;
cout <<"Enter subjectFour:";
cin >> subjectFour;
cout <<"Enter subjectFive:";
cin >> subjectFive;
sum = subjectOne+subjectTwo+subjectThree+subjectFour+subjectFive;
percentage = sum/500*100;
cout <<percentage;}



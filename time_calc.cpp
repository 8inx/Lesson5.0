#include<iostream>
using namespace std;


int main(){

    int h,m,s;

    cout << "This program converts input time in Seconds to its equivalent in Hours, Minutes, and Seconds \n\n";
    cout << "Input time in seconds  : ";
    cin  >> s;

    h = s/3600; //hour
    s = s%3600; //remaining seconds
    m = s/60;   //mins
    s = s%60;   //remaining seconds

    cout << "\n";
    cout << "The input time in seconds is equivalent to: " << h << " Hours " << m << " Minutes " << s << " Seconds\n";

    return 0;
}
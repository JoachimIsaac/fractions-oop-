#pragma once
#include<string>
using namespace std;


class Fraction{
private:
    int num,den;
    
public:
    Fraction();
    Fraction(int n , int d);
    double toDecimal();
    void reduce_fraction();
    string convert_fraction();
    
    
    
};
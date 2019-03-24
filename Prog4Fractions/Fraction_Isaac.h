#pragma once


class Fraction{
private:
    int num,den;
    
public:
    Fraction();
    Fraction(int n , int d);
    double todecimal();
    void reduce_fraction();
    string convert_fraction();
    Fraction Sum(Fraction fract1,Fraction fract2);
    
    
};

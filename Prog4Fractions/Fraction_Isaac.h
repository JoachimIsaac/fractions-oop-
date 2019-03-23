#pragma once

class Fraction{
private:
    int num,den;
    
public:
    Fraction();
    Fraction(int n , int d);
    double todecimal();
    void reduce_fraction();
    String convert_fraction();
    Fraction sum(Fraction fract1,Fraction fract2);
    
    
};

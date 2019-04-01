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
    
    int  getNumerator();
    int  getDenominator();
    
    void  setNumerator(int n);
    void  setDenominator (int d);
    
    
    friend std::ostream& operator<<(std::ostream &out, Fraction f);
    Fraction operator * (const Fraction &b);
    Fraction operator + (const Fraction &s);
    Fraction operator - (const Fraction &m);
    Fraction operator / (const Fraction &q);
    
    
    
    
    
    
    
    
    
    
    
    
};

#pragma once
#include<string>
using namespace std;


class Fraction{
private:
    int num,den;
    
public:
    friend std::ostream& operator<<(std::ostream &out, Fraction f);
    Fraction();
    Fraction(int n , int d);
    double toDecimal();
    void reduce_fraction();
    string convert_fraction();
    
    
    void set_num_and_den(int n, int d);
    
    int  getNumerator();
    int  getDenominator();
    
   
    
    void convertion();
    
    Fraction operator*(const Fraction &b);
    
    void reduce_fraction_result();
    
};

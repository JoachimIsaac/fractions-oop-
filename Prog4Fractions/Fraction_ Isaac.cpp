#include"Fraction_Isaac.h"
#include<iostream>
#include<fstream>
#include<cstdlib> // rand()
#include<string>


Fraction :: Fraction(){
    num = 4;
    den = 5;
}

Fraction :: Fraction(int n , int d){
    
    num = n;
    den = d;
    reduce_fraction();
    convert_fraction();
}






double Fraction :: todecimal(){
    
    return (double)num/den;
}


void Fraction :: reduce_fraction(){
    
    for(int i = den * num; i > 1; i --){
        if ((den % i == 0) && (num % i == 0)){
            den /= i;
            num /= i;
        }
    }
    
    
}










string Fraction :: convert_fraction(){
    
   
    
    
return " " + std::to_string(num); +  + "/" + std::to_string(den);
        
    }
    
    
    
    
    
    






/*Fraction Fraction :: sum(Fraction frac1, Fraction frac2){
    
    int den = frac1.den * frac2.den;
    int num1 = frac1.num * frac2.den;
    int num2 = frac2.num * frac1.den;
    
    Fraction f = Fraction(num1 + num2,den);
    f.reduce_fraction();
    

    
    
 
}
*/

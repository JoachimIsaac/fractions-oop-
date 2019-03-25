#include"Fraction_Isaac.h"
#include<iostream>
#include<fstream>
#include<cstdlib> // rand()
#include<string>
#include<sstream>
using namespace std;





Fraction :: Fraction(){
    num = 4;
    den = 5;
    
}

Fraction :: Fraction( int n ,  int d){
    
    num = n;
    den = d;
    cout << " " << num << "/" << den;
}






double Fraction :: toDecimal(){
    
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

//work on the convertion to string
/*
string Fraction :: convert_fraction(){
     std::to_string(num);
     std::to_string(den);
    
    
    return " " + num + "/" + den;
    
}
*/

 void Fraction::Print_fraction(){
}











 void Fraction ::  setNumerator(int n){
    
    if( n < 0 ){
        num = 0;
    }
    else{
        num = n;
    }
}

void Fraction :: setDenominator(int d){
    if(d <= 0){
        
        den = 1;
    }
    else {
        den = d;
    }
    
}


int Fraction :: getNumerator(){
    
    return num;
}


int Fraction:: getDenominator(int d){
    
    return den;
}







/*Fraction Fraction :: sum(Fraction frac1, Fraction frac2){
 
 int den = frac1.den * frac2.den;
 int num1 = frac1.num * frac2.den;
 int num2 = frac2.num * frac1.den;
 
 Fraction f = Fraction(num1 + num2,den);
 f.reduce_fraction();
 
 
 
 
 }
 */

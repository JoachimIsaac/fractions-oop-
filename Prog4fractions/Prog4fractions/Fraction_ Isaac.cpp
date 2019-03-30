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
    reduce_fraction();
   
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
     
     
     
  cout << " " <<getNumerator() << "/" << getDenominator();
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


int Fraction :: getDenominator(){
    
    return den;
}


void Fraction :: convertion(){
    
    
    
}

ostream& operator<<(ostream &out, Fraction f)
{   //prints out a fraction which doesn't simplify to a mixed fraction or
    //whole number.
    if((f.num > 0) && (f.den > 1) && ((f.num / f. den) < 0)){
    out << f.num << "/" << f.den;
    
  
    }
    //when the fraction has a nummerator that is higher than the denominator and the
    //denominator equals zero. it prints out the whole number answer.
    else if ( (f.num > f.den) && (f.den == 1)){
        int wholenumber = f.num/f.den;
        
        out << wholenumber;
        
        
    }
    //prints out a whole number if the fraction num and den are equal to each other.
    else if(f.num == f.den){
        
        int wholenumber = f.num / f.den;
        
        out << wholenumber;
    }
    
    //print out a whole number if the fraction can divide evenly 6/3.
    else if( (f.num % f.den == 0) &&(f.den < f.num)){
        
        int wholenumber = f.num / f.den;
        
        out << wholenumber;
        
    }
    else if((f.num > 0) && (f.den > 1) && (f.num / f. den > 0)){
        
        int wholenumber = f.num / f.den;
        int  new_num = f.num % f.den;
        
        out << wholenumber << " " << new_num << "/" << f.den;
        
        
        
    }
    else if( f.num == 0){
        
        out << f.num;
        
    }
    else
        
        
        
        
        return out;
    
    
}


/*Fraction Fraction :: sum(Fraction frac1, Fraction frac2){
 
 int den = frac1.den * frac2.den;
 int num1 = frac1.num * frac2.den;
 int num2 = frac2.num * frac1.den;
 
 Fraction f = Fraction(num1 + num2,den);
 f.reduce_fraction();
 
 
 
 
 }
 */

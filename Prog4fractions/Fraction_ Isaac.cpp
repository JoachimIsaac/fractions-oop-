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
    //set_num_and_den(n,d);
    setNumerator(n);
    setDenominator(d);
    
    //reduce Fraction to lowest terms
    reduce_fraction();
    
    
}



double Fraction :: toDecimal(){
    
    return (double)num/den;
}


void Fraction :: reduce_fraction(){
    int a = num;
    int b = den;
    while (b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    /*
     a is the greatest common divisor
     the abs() function - returns the absolute value
     */
    num = num/ abs(a);
    den = den / abs(a);
    
}


void Fraction :: set_num_and_den(int n, int d){
    //prevent division by zero
    if(0 == den){
        den = 1;
    }
    //change the values of numerator & denominator
    num = n;
    den = d;
    /*
     if denominator is negative,
     set it to positive and set numerator to negative
     */
    if(den < 0) {
        den = -den;
        num = -num;
    }
    //reduce Fraction to lowest terms
    reduce_fraction();
}

void Fraction :: setNumerator (int n){
    
    num = n;
}

void Fraction :: setDenominator (int d){
    
    den = d;
    
    
    if(0 == den){
        den = 1;
    }
    
    if(den < 0) {
        den = -den;
        num = -num;
    }
    
    
    
}
    
    


int Fraction :: getNumerator(){
    
   return num;
}


int Fraction :: getDenominator(){
    
    return den;
}




ostream& operator<<(ostream &out, Fraction f)
{   //prints out a fraction which doesn't simplify to a mixed fraction or
    //whole number.
    //if((f.num > 0) && (f.den > 1) && ((f.num / f. den) < 0)){
   // out << f.num << "/" << f.den;
  
   // }
    //when the fraction has a nummerator that is higher than the denominator and the
    //denominator equals zero. it prints out the whole number answer.
    if ( (f.num > f.den) && (f.den == 1)){
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
    else if(((f.num > 0) && (f.den > 1) && (f.num / f. den > 0)) || (f.num < 0 || f.den < 0)){
        
        int wholenumber = f.num / f.den;
        int  new_num = f.num % f.den;
        if (f.den > 0 && f.num > 0){
        out << wholenumber << " " << new_num << "/" << f.den;
        }
        else{
           int wholenumber = f.num / f.den;
           int new_num = f.num % f.den;
    //This sets the numerator positive so that it won't have two negative signs.
            if(wholenumber > 0 || wholenumber < 0){
            wholenumber = wholenumber;
            new_num = -(new_num);

        out << wholenumber << " " <<  new_num <<  "/" << f.den;
            }
            //if whole number equal zero it doesn't print it and prints out a minus
            //with the remaining fraction.
            else {
                new_num = -(new_num);
                
                out << "-" <<  new_num <<  "/" << f.den;
                
                
            }
        }
    }
    
    else if( f.num == 0){
        
        out << f.num;
        
    }
    else if(f.den == 0 ){
        out << "undefined ";
    }
    else{
        
        out << f.num << "/" << f.den;
    }
        
        return out;
}


Fraction Fraction :: operator * (const Fraction &b){
    
    Fraction product;
    
    product.num = num * b.num;
    product.den = den * b.den;
    
    int a = product.num;
    int c = product.den;
    while (c != 0){
        int temp = a % c;
        a = c;
        c = temp;
    }
    /*
     a is the greatest common divisor
     the abs() function - returns the absolute value
     */
    product.num = product.num/ abs(a);
    product.den = product.den / abs(a);
    
    return product;
}

Fraction Fraction :: operator + (const Fraction &s){
    
    Fraction sum;
    
    
    if(den == s.den){
        sum.num = num + s.num;
        sum.den = den;
    
    }
    else{
        
        sum.num = (num * s.den) + (s.num * den);
        sum.den = (den * s.den);
    }
    int a = sum.num;
    int c = sum.den;
    while (c != 0){
        int temp = a % c;
        a = c;
        c = temp;
    }
    /*
     a is the greatest common divisor
     the abs() function - returns the absolute value
     */
    sum.num = sum.num/ abs(a);
    sum.den = sum.den / abs(a);
    
    return sum;
}


Fraction Fraction :: operator - (const Fraction &m){
    
    Fraction difference;
    
    
    if(den == m.den){
        difference.num = num - m.num;
        difference.den = den;
        
    }
    else{
        
        difference.num = (num * m.den) - (m.num * den);
        difference.den = (den * m.den);
    }
    int a = difference.num;
    int c = difference.den;
    while (c != 0){
        int temp = a % c;
        a = c;
        c = temp;
    }
    /*
     a is the greatest common divisor
     the abs() function - returns the absolute value
     */
    difference.num = difference.num/ abs(a);
    difference.den = difference.den / abs(a);
    
    return difference;
}

Fraction Fraction :: operator / (const Fraction &q){
    
    Fraction quotient;
    
    quotient.num = num * q.den;
    quotient.den = den * q.num;
    
    int a = quotient.num;
    int c = quotient.den;
    while (c != 0){
        int temp = a % c;
        a = c;
        c = temp;
    }
    /*
     a is the greatest common divisor
     the abs() function - returns the absolute value
     */
    quotient.num = quotient.num/ abs(a);
    quotient.den = quotient.den / abs(a);
    
    return quotient;
}

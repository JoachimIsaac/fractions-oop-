#include"Fraction_Isaac.h"
#include<iostream>
using namespace std;


//Default constructor.
Fraction :: Fraction(){
    num = 4;
    den = 5;
}

//Parameterized constructor.
Fraction :: Fraction( int n ,  int d){
    
    num = n;
    den = d;
    
    //Sets numerator.
    setNumerator(n);
    //Sets denominator.
    setDenominator(d);
    
    //Reduces Fraction to lowest terms.
    reduce_fraction();
}


//This member function converts a Fraction into a decimal.
double Fraction :: toDecimal(){
    
    return (double)num/den;
}

//This member function reduces the fraction to it's lowest terms.
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

//Setter member function, that sets the numerator.
void Fraction :: setNumerator (int n){
    
    num = n;
    
}

//Setter member function, that sets the denominator.
void Fraction :: setDenominator (int d){
    
    den = d;
    
    //This puts the denominator to 1 if it is zero,
    //this eliminates the chances of getting something
    //undefined.
    if(den == 0){
        den = 1;
    }
    //This changes where the minus is placed when the denominator is less that 0.
    //so the minus is placed on the numerator.This is essential to manipulating output
    //that is negative.
    if(den < 0) {
        den = -den;
        num = -num;
    }
    
}
    
    

//Getter member function for the numerator.
int Fraction :: getNumerator(){
    
   return num;
}

//Getter member function for the denominator.
int Fraction :: getDenominator(){
    
    return den;
}



//This basically prints out fractoins in all the different forms.
//mixed, normal , as a whole number.
ostream& operator<<(ostream &out, Fraction f)
{
    
    //When the fraction has a numerator that is higher than the denominator and the
    //denominator equals one. It prints out the whole number answer.
    if ( (f.num > f.den) && (f.den == 1)){
        int wholenumber = f.num/f.den;
        
        out << wholenumber;
    }
    
    //When the numerator and denominator are equal it prints out
    // a whole number answer.
    else if(f.num == f.den){
        
        int wholenumber = f.num / f.den;
        
        out << wholenumber;
    }
    
    //When the fraction can be divided evenly even though the denominator and numerator
    //are different. It prints out the whole number answer.(e.g) 6/3.
    else if( (f.num % f.den == 0) &&(f.den < f.num)){
        
        int wholenumber = f.num / f.den;
        
        out << wholenumber;
        
    }
    //Prints out a positive mixed number.
    else if(((f.num > 0) && (f.den > 1) && (f.num / f. den > 0)) || (f.num < 0 || f.den < 0)){
        
        int wholenumber = f.num / f.den;
        int  new_num = f.num % f.den;
        if (f.den > 0 && f.num > 0){
        out << wholenumber << " " << new_num << "/" << f.den;
        }
        //It prints out a negative mixed number.
        else{
            
           int wholenumber = f.num / f.den;
           int new_num = f.num % f.den;
            
    //This sets the numerator positive so that it won't have two negative signs.
    //Prevents this "-2 -4/10"
            if(wholenumber > 0 || wholenumber < 0){
            wholenumber = wholenumber;
            new_num = -(new_num);

        out << wholenumber << " " <<  new_num <<  "/" << f.den;
                
            }
            
            //If whole number equals zero it doesn't print it. It prints out a minus
            //with the remaining fraction. So you won't get this "0 -1/4"
            else {
                new_num = -(new_num);
                
                out << "-" <<  new_num <<  "/" << f.den;
                
                
            }
        }
    }
    //This prints out a zero (0) if you have a fraction that the
    //numerator is 0.
    else if( f.num == 0){
        
        out << f.num;
        
    }
    //Prints out the fraction normally when it can't be converted
    //to a mixed fraction or whole number.
    else{
        
        out << f.num << "/" << f.den;
    }
        
        return out;
}


//Whenever a fraction is being (*) multipled this prints out
//the results for the product.
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

//Whenever a fraction is being added (+) this prints out
//the results for the sum.
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

//Whenever a fraction is being subtracted (-) this prints out
//the results for the subtraction.
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

//Whenever a fraction is being divided  this prints out the results
//for the division.
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

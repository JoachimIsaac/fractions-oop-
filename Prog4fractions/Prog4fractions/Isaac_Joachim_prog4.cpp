#include"Fraction_Isaac.h"
#include<iostream>
#include<fstream>
#include<cstdlib> // rand()
#include <sstream>
using namespace std;

// Purpose:  Sort an array of fractions from least to greatest
// Input:  An array of fractions, along with the number of fractions to sort

void sort(Fraction [], int);

int main(){
    ofstream outfile;
    outfile.open("Isaac_Joachim_fractions.txt");
    outfile << "Joachim Isaac's Fraction Class\n\n";
    
    // Instantiate 6 Fraction objects using a parameterized constructor
    Fraction f1(100,-23 ), f2(3, 4), f3(6, 30), f4(30, 12), f5(6,2), f6(9, 0);
    //f1(2, 3)
    // Instantiate 4 Fraction objects using the default constructor
    // These objects will hold arithmetic results
    Fraction sum, difference, product, quotient;
    
    // An array of 10 default fractions
    Fraction f[10];
    
    // Variable to hold seed for random number generator
    unsigned int theSeed;
    
    // Calculate a sum, difference, product, and quotient
    // C++ provides a default assignment operator for a class you define
      // sum = f1 + f3;
    // difference = f4 - f2;
    //product = f1 * f2;
    // quotient = f5 / f3;
    
    
    
     //Display the results
    outfile << f1 << " + " << f3 << " = " <<endl;
    //sum << endl << endl;
    outfile <<  f4 << " - " << f2 << " = " <<endl;
    //difference << endl << endl;
    outfile << f1 << " * " << f2 << " = " << endl;
    //product << endl << endl;
    outfile << f5 << " divided by " << f3 << " = " <<endl;
    //quotient << endl << endl;
     
    
     //Express a fraction as a decimal
     outfile << f2 << " as a decimal is " << f2.toDecimal() << endl <<endl;
    
    
    
    
    /*
     
     
     // Get input from user for random number generator seed
     cout << "Enter a value for the seed.  ";
     cin >> theSeed;
     outfile << endl;
     // Seed the random number generator
     srand(theSeed);
     // Use randomly generated numbers for the
     // numerators and denominators of the array of default fractions
     for (int x = 0; x < 10; x++){
     f[x].setNumerator(x + rand() % 5);
     f[x].setDenominator(rand() % 12 + 1);
     }
     //Sort the array of fractions
     sort(f, 10);
     
     //Display the results
     outfile << "The randomly generated fractions in order from least to greatest:\n";
     for (int c = 0; c < 10; c++)
     outfile << f[c] << "      ";
     */
     outfile << endl;
     system("pause");
     return 0;
     }
     // Write the body of the sort function here
     
     
     
     
    
     

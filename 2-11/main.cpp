/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 11:20 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Exercise2.11: Write a program that prompts the user to input two numbers,the
 * base and exponent. Print the result of raising the base to the power of the exponent.
 */

void raisingResult()
{
    int base, exponent;
    long result = 1;
    cout << "please input the value of base and the exponent: \n";
    cin >> base >> exponent;
    
    for(int count = 1; count <= exponent; ++count)
    {
        result *= base;
    }
    
    cout << "the result of raise the base: " << base << "\tand the exponent: " <<\
exponent << "\tis: " << '\t' << result << '\n';
    
}
int main(int argc, char** argv) {

    cout << "Starting the exercise 2-11\n";
    raisingResult();
    return 0;
}


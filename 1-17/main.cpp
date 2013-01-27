/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 4:31 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Exercise1.17: Write a program to ask the user to enter a series of numbers. Print
 * a message saying how many of the numbers are negative numbers.
 */

int inputStatistic()
{
    
    cout << "please input numbers: " << endl;
    
    int valInput;
    int minusCount = 0;
    
    while(cin >> valInput)
    {
        if (valInput < 0)
        {
            minusCount += 1;
        }
    }
    return minusCount;
}

int main(int argc, char** argv) {

    //count << "the count of minus input is: " << inputStatistic() << endl;
    
    cout << "the result is" << inputStatistic() << endl;
    return 0;
}


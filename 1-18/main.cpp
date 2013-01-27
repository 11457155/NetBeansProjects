/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 9:33 PM
 */

#include <cstdlib>
#include <iostream>

#define ERROR   1
#define SUCCESS 0
using namespace std;

/*
 * Write a program that prompts the user for two numbers and writes each number 
 * in the range specified by the two numbers to the standard output.
 */
void printProperFromInput()
{
    int val1, val2;
    cout << "Please input 2 numbers: " << endl;
    cin >> val1 >> val2;
    cout << "the input numbers are :" << val1 << " and " << val2 << " respectively" \
         << endl; 
    
    int lowerRange, higherRange;
    
    if(val1 > val2)
    {
        /* pay attention to = and == */
        if(val1 == val2 + 1)
        {
            cout << "there is no number between this input" << endl;
            return;
        }
        else
        {
            lowerRange  = val2;
            higherRange = val1;
        }
    }
    else if(val1 < val2)
    {
        /* pay attention to = and == */
        if(val2 == val1 + 1)
        {
            cout << "there is no number between this input" << endl;
            return;      
        }
        else
        {
            lowerRange  = val1;
            higherRange = val2;
        }
    }
    else
    {
        cout << "the user has input 2 identical numbers, which is invalid!" << endl;
        return;
    }
    
    for(int i = lowerRange + 1; i < higherRange; ++i)
    {
       cout << "the number between these two numbers is: " << i << endl;
    }               
}
int main(int argc, char** argv) {
    
    cout << "the  test result of this  is :"<< endl;
    printProperFromInput();
    return 0;
}


/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 28, 2013, 9:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Exercise1.19: What happens if you give the numbers 1000 and 2000 to the program 
 * written for the previous exercise? Revise the program so that it never prints 
 * more than 10 numbers per line.
 */

void print(int lowRange, int highRange);

void printRangeNumbers()
{
    int input1, input2;
    int lowRange, highRange;
    cout << "please input two numbers as the input boundary: " << endl;
    cin >> input1 >> input2;
    
    if(input1 > input2)
    {
        if(input1 == input2 + 1)
        {
            cout << "there are no numbers between the user's input" << endl;
            return;
        }
        else
        {
            highRange = input1;
            lowRange  = input2;
        }
    }
    else if(input1 < input2)
    {
        if(input2 == input1 + 1)
        {
            cout << "there are no numbers between the user's input" << endl;
            return;
        }
        else
        {
            highRange = input2;
            lowRange  = input1;
        }
    }
    else
    {
        cout << "these two inputs are invalid, please retry again." << endl;
        return;
    }
    
    print(lowRange, highRange);   
}

void print(int lowRange, int highRange)
{
    cout << "the numbers between input are: " << endl;
    
    for(int i = lowRange + 1; i < highRange; ++i)
    {
        cout << i << " ";
        
        /* pay special attention to this code used to control the output format */
        if(i % 10 == 0)
        {
            cout << endl;
        }
    }
    
    cout << endl;
}

int main(int argc, char** argv) {
    cout << "starting exercise 1-19." << endl;
    printRangeNumbers();
    return 0;
}


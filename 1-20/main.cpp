/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 28, 2013, 9:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Write a program to sum the numbers in a user-specified range,omitting the if 
 * test that sets the upper and lower bounds. Predict what happens if the input 
 * is the numbers 7 and 3, in that order. Now run the program giving it the numbers 
 * 7 and 3, and see if the results match your expectation. If not, restudy the 
 * discussion on the for and while loop until you understand what happened.
 */
void addWithinRange()
{
    int input1, input2;
    int sum = 0;
    cout << "please input the numbers: " << endl;
    cin >> input1 >> input2;
    
    /* pay attention to this condition statement within the for */
    for (int val = input1 + 1; val < input2; ++val)
    {
        sum += val;
    }
    
    cout << "the sum is: " << sum << endl;
}
int main(int argc, char** argv) {

    cout << "starting exercise 1-20" << endl;
    addWithinRange();
    return 0;
}


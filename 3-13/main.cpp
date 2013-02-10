/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 6, 2013, 9:10 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

/*
 * Exercise3.13: Read a set of integers into a vector.Calculate and print the sum 
 * of each pair of adjacent elements in the vector. If there is an odd number, 
 * tell the user and print the value of the last element without summing it. Now
 * change your program so that it prints the sum of the first and last elements, 
 * followed by the sum of the second and second-to-last and so on.
 */

void inputCalculation1()
{
    vector<int> inputVec;
    
    int input;
    
    cout << "please input a set of integers" << endl;
    while(cin >> input)
    {
        inputVec.push_back(input);
    }
    
    for(vector<int>::size_type index = 0; index != inputVec.size(); ++index)
    {
        cout << "the stored input data is: " << inputVec[index] << endl;
    }
    
    /* within the loop, the initial condition is vector<int>::size_type */
    if(inputVec.size() % 2 == 0)
    {
        cout << "starting calculating the sum of adjacent numbers. " << endl;

        for(vector<int>::size_type indexInput = 0; indexInput != inputVec.size(); indexInput = indexInput + 2)
        {
            cout << inputVec [indexInput] +  inputVec [indexInput + 1] << " " << endl; 
        }
    }
    else
    {
        cout << "the " << inputVec[inputVec.size() - 1] << " element cannot be added" << endl;
    }
}

void inputCalculation2()
{
    /* now modify the code to add the first and the last elements followed by the second
    and the last-second elements */
    
    vector<int> inputVec;
    vector<int>::size_type first, last;
    int input;
    cout << "please input a set of integers" << endl;
    while(cin >> input)
    {
        inputVec.push_back(input);
    }

    cout << "now modify this code to print the required data calculation." << endl;
    
    /* pay attention to the double loop conditions */
    /* if the count is odd, then the odd number will not be added */
    for(first = 0, last = inputVec.size() - 1; first < last; ++first, --last)
    {
        cout <<"the required sum result is :" << inputVec[first] + inputVec[last] << endl;
    }
    
}

int main(int argc, char** argv) {

    cout << "starting Exercise 3-17" << endl;
    inputCalculation1();
    inputCalculation2();
    return 0;
}


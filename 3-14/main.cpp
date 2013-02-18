/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 18, 2013, 8:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

/*
 * Exercise 3.14: Read some text into a vector, storing each word in the input as 
 * an element in the vector. transform each word into uppercase letters. Print the 
 * transformed elements from the vector, printing eight words to a line.
 */
void uppercaseTransformation()
{
    string inputStr;
    vector<string>storeStr;
    cout << "please input the text." << endl;
    
    while(cin >> inputStr)
    {
        storeStr.push_back(inputStr);
    }
    
    if(storeStr.empty())
    {
        cout << "no input from user" << endl;
        return;
    }
    
    // pay attention to the initial condition within this loop when iterator is
    // used, the condition should be vector<int>::size_type index
    for(vector<string>::size_type vecIndex = 0; vecIndex != storeStr.size(); ++vecIndex)
    {
        // here check each character within a word which has been stored into the vector.
        for(string::size_type strIndex = 0; strIndex != storeStr[vecIndex].size(); ++strIndex)
        {
            if(islower(storeStr[vecIndex][strIndex]))
            {
                storeStr[vecIndex][strIndex] = toupper(storeStr[vecIndex][strIndex]);
            }
        }
        
        cout << storeStr[vecIndex] << " ";
        if((vecIndex + 1) % 8 == 0)
            cout << endl;
    }
    
}
int main(int argc, char** argv) {

    cout << "starting Exercise 3-14" << endl;
    uppercaseTransformation();
    cout << endl;
    cout << "This program ends" << endl;
    return 0;
}


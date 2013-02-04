/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 4, 2013, 9:54 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
 * Exercise3.10: Write a program to strip the punctuation from a string. The input 
 * to the program should be a string of characters including punctuation; the output 
 * should be a string in which the punctuation is removed.
 */
void removePunctuation()
{
    cout << "Please input a string with punctuation. " << endl;
    /* resultStr is used to store the new processed pure character */
    string strInput, resultStr;
    /* used for storage for the single string[index] */
    char ch;
    bool isPunc;
    cin >> strInput;
    
    
    /* the return type of string.size() is string::size_type */
    for(string::size_type index = 0; index < strInput.size(); ++index)
    {
        ch = strInput[index];
        if(ispunct(ch))
        {
            isPunc = true;
        }
        else
        {
            resultStr += ch;
        }
     }
  
    if(isPunc == true)
    {
        cout << "the processed string is :" << resultStr << endl; 
    }
    else
    {
        cout << "this input string has no punctuation" << endl;
    }
}
int main(int argc, char** argv) {

    cout << "starting Exercise 3-10" << endl;
    removePunctuation();
    
    return 0;
}


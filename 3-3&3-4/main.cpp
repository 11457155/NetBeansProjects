/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 8:08 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * Exercise 3.3: Name the three ways to initialize a string. 
 * Exercise 3.4: What are the values of s and s2?
 */
string globalSV;

void stringConstructorTest()
{
    string s("this is Levi Bin Lee");
    string s1(s);
    string s2(4, 'a');
    cout << "string of s is: " << s << endl;
    cout << "string of s1 is: " << s1 << endl;
    cout << "string of s2 is: " << s2 << endl;
}

void localStringTest()
{
    string localVal;
    cout << "the value of this global string is: " << globalSV << endl;;
    cout << "the value of this local string is: " << localVal << endl;;
}
int main(int argc, char** argv) {

    cout << "start Exercise 3.3&3.4" << endl;
    stringConstructorTest();
    localStringTest();
    return 0;
}


/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 28, 2013, 9:07 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */

string gSa[10];
int gia[10];

int main(int argc, char** argv) {

    string lSa[10];
    int lia[10];
    cout << "the global string variable is: " << endl;
    for(int i = 0; i <= 9; ++i)
    {
        cout << gSa[i] << " ";
    }
    cout << endl;
    cout << "the global int variable is: " << endl;
    for(int i = 0; i <= 9; ++i)
    {
        cout << gia[i] << " ";
    }
    cout << endl;
    cout << "the local string variable is: " << endl;
    for(int i = 0; i <= 9; ++i)
    {
        cout << lSa[i] << " ";
    }
    cout << endl;
    cout << "the local int variable is: " << endl;
    for(int i = 0; i <= 9; ++i)
    {
        cout << lia[i] << " ";
    }
    
    cout << endl;
    return 0;
}


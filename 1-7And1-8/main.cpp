/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 11:30 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

void commentsTest()
{
    /* this is the comments test function */
    // correct comments:
    cout << "*/" << endl;
    cout << "/*" << endl;
    // this function aims to error output
    //cout << /* "*/" */ << endl; 
    cout << "/* " "*/"  "*/" << endl;
}
int main(int argc, char** argv) {

    cout << "starting the comments test function" << endl;
    commentsTest();
    return 0;
}


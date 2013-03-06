/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on March 6, 2013, 9:01 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
void constPtrTest()
{
    int i1 = 1;
    const int i2 = 2;
    
    int *ptr1 = &i1;
    const int *ptr2 = &i2;
    int *const ptr3 = &i1;
    const int *const ptr4 = &i1;
    const int *const ptr5 = &i2;
    
    cout << " the original value of ptr1 is(should be 1): " << *ptr1 << " " << "and the modified \
ptr1 value is(should be 2): " << *ptr1 + 1 << endl;
    cout << " the original value of ptr2 is(should be 2): " << *ptr2 << endl;
    ptr2 = ptr1;
    cout << "the modified ptr2 is(should be 1): " << *ptr2 << endl;
    cout << "the original value of ptr3 is(should be 1): " << *ptr3 << endl;
    *ptr3 = 5;
    cout << "the modified ptr3 is(should be 5):" << *ptr3 << endl;
    
    /* note: ptr4 should be initialized to a const value */
    cout << "the incorrect value of ptr4 is(should be 0), and it cannot be modified: " << \
            *ptr4 << endl;
    
    cout << "the correct initialized value of ptr5 is(should be 2), and it cannot be modified: " << \
            *ptr5 << endl;
}
int main(int argc, char** argv) {

    cout << "start Exercise 4-19" << endl;
    constPtrTest();
    return 0;
}


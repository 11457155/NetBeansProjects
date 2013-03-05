/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on March 5, 2013, 9:06 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * this program aims to making two pointers point to the same elements within an 
 * array
 */
void ptrTest()
{
    const size_t arr_size = 5;
    int arr1[arr_size] = {1,2,3,4,5};
    
    int *ptr1 = arr1;
    /* when pointer2 is beyond the array bundary, the the dereference operation 
     cannot be performed */
    int *ptr2 = ptr1 + 4;
    
    ptr1 += ptr2 - ptr1;
    
    cout << "the value of ptr2 is:" << *ptr2 << endl;
    cout << "the final value of ptr1 is:" << *ptr1 << endl;
}
int main(int argc, char** argv) {
    cout << "start Exercise 4-17" << endl;
    ptrTest();
    return 0;
}


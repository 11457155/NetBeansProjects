/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on March 4, 2013, 9:38 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Exercise 4-14: 编写代码修改指针的值;然后再编写代码修改指针所指对象的值。
 */

void pointerOperation()
{
    int iVal1 = 1;
    int iVal2 = 2;
    
    int *ptr1, *ptr2;
    
    ptr1 = &iVal1;
    ptr2 = &iVal2;
    
    cout << "now start modifying the value of a pointer" << endl;
    cout << "the original value of pointer1 is:" << *ptr1 << endl;
    cout << "the original value of pointer2 is:" << *ptr2 << endl;
    /* now ptr1 pointsto iVal2, rather than the original variable*/
    ptr1 = ptr2;
    cout << "the modified value of pointer1 is:" << *ptr1 << endl;
    
    cout << "now start changing the value a points points to" << endl;
    *ptr2 = 1;
    cout << "now the pointer2 points to: " << *ptr2 << endl;
}
int main(int argc, char** argv) {

    cout << "Start Exercise 4-14" << endl;
    pointerOperation();
    return 0;
}


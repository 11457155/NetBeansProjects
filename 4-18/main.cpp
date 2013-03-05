/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on March 5, 2013, 10:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 编写程序,使用指针把一个 int 型数组的所有元素设置 为 0。
 */

void arrayAssignment()
{
    const size_t arr_size = 10;
    /* coz this array will be directly be overwritten */
    int arr[arr_size];
    
    cout << "The initialed value for the array is:" << endl;
    for(int *ptrBegin = arr, *ptrEnd = ptrBegin + arr_size; ptrBegin != ptrEnd; ++ptrBegin)
    {
        *ptrBegin = 0;
        cout << *ptrBegin << " ";
    }
    cout << endl;
}
int main(int argc, char** argv) {

    cout << "Start Exercise 4-18" << endl;
    arrayAssignment();
    return 0;
}


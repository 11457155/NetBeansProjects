/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on March 2, 2013, 9:29 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Exercise 4.9: 编写程序定义一个有 10 个 int 型元素的数组,并以其在数组中的位置作为各元素的初值。
 */

void arrayAssignment()
{
    const int arrSize = 10;
    int arr1[arrSize] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    cout << "the required data is:" << endl;
    for(size_t index = 0; index < arrSize; ++index)
    {
        /* pay attention to the index and the required value */
        arr1[index] = index + 1;
        
        cout << arr1[index] << " ";
    }
}
int main(int argc, char** argv) {

    cout << "now starting the exercise 4-9" << endl;
    arrayAssignment();
    return 0;
}


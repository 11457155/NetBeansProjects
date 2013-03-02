/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on March 2, 2013, 1:30 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * Exercise 4-7: 编写必要的代码将一个数组赋给另一个数组,然后把这段代码改用 vector 实现。考虑
 * 如何将一个 vector 赋给另一个 vector。
 */
const int array_size = 9;
//int arr2[array_size];

void arrayAssignment()
{
    
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    /* if the local array is not initialized, the value will be invalid */
    int arr2[array_size] = {0,0,0,0,0,0,0,0,0};
    
    vector<int> vec1(5,1);
    vector<int> vec2(10,2);
    
    cout << "before assignment, the original array1 is: " << endl;
    for(size_t i = 0; i < array_size; ++i)
    {
        cout << arr1[i] << " ";
    }
    
    cout << endl;
    cout << "before assignment, the original array2 is: " << endl;
    for(size_t i = 0; i < array_size; ++i)
    {
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    cout << "before assignment, the original vector1 is: " << endl;
    for(vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); ++ iter)
    {
        cout << *iter << " ";
    }
    
    cout << endl;
    cout << "before assignment, the original vector2 is: " << endl;
    for(vector<int>::iterator iter = vec2.begin(); iter != vec2.end(); ++ iter)
    {
        cout << *iter << " ";
    }
    
    cout << endl;
    cout << "now starting the array and vector assignment." << endl;
    
    cout <<"now, after the assignment, the modified array 2 is:" << endl;
    for(size_t i = 0; i < 9; ++i)
    {
        arr2[i] = arr1[i];
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    cout <<"now, after the assignment, the modified vector 1 is:" << endl;
    vec1 = vec2;
    for(vector<int>::size_type index = 0; index != vec1.size(); ++index)
    {
        cout << vec1[index] << " ";
    }
    
    cout << endl;
}
int main(int argc, char** argv) {

    cout << "now start Exercise 4-7." << endl;
    arrayAssignment();
    return 0;
}


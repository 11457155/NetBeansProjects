/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 20, 2013, 9:23 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * 编写程序来创建有 10 个元素的 vector 对象。用迭代器把每个元素值改为当前值的 2 倍。
 */

void doubleValue()
{
    int inputVal;
    vector<int> vecInt;
    
    cout << "please assign some value to this vector. " << endl;
    while(cin >> inputVal)
    {
        vecInt.push_back(inputVal);
    }
    
    if(vecInt.empty())
    {
        cout << "there are no numbers within this vector" << endl;
        return;
    }
    
    cout << "the modified values areL: " << endl;
    for(vector<int>::iterator iter = vecInt.begin(); iter != vecInt.end(); ++iter)
    {
        *iter = (*iter) * 2;
        cout << *iter << " ";
    }
}
int main(int argc, char** argv) {

    cout << "Starting exercise 3-18" << endl;
    doubleValue();
    return 0;
}


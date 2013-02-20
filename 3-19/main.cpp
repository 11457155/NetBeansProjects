/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 20, 2013, 9:35 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

/*
 * 编写程序来创建有 10 个元素的 vector 对象。用迭代器 把每个元素值改为当前值的 2 倍,输出 vector 
 * 的所有元素。
 */
void doubleValAndPrint()
{
    vector<int> vecInt(10);
    
    cout << "the original value stored in vector are: " << endl;
    for(vector<int>::iterator iter = vecInt.begin(); iter != vecInt.end(); ++iter)
    {
        *iter = 5;
        cout << *iter << " ";
    }
    
    cout << endl;
    cout << "the modified value stored in vector are: " << endl;
    for(vector<int>::iterator iter = vecInt.begin(); iter != vecInt.end(); ++iter)
    {
        *iter = (*iter) * 2;
        cout << *iter << " ";
    }
    cout << endl;
    
}
int main(int argc, char** argv) {
    doubleValAndPrint();
    return 0;
}


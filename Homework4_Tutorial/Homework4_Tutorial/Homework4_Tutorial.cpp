// Homework4_Tutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define SIZE 100*1024 //100 kilobytes

void allocateMemoryOnStack()
{
    char* arr;
    int sum = 0;
    while (true)
    {
        arr = new char[SIZE];
        std::fill(arr, arr + SIZE, 1);
        sum += SIZE;
        std::cerr << "SIZE " << sum << std::endl;
    }
}
int main()
{
    //allocateMemoryOnStack();
}


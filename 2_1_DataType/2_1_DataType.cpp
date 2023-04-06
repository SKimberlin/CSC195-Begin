// 2_1_DataType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    const unsigned short MAXEMP = 20;

    std::cout << " 2_1_DataType Hello World!\n";

    Employee workers[MAXEMP];
    unsigned short numEmployees = 0;

    cout << "\n Please enter the number of employees: ";
    cin >> numEmployees;
    if (numEmployees > MAXEMP) numEmployees = MAXEMP;

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        // Call read for each employee
        workers[iCount].Read();
    }
    for (int i = 0; i < numEmployees; i++) {
        workers[i].Write();
    }





















    // workers[0].age = 23;
    // workers[0].Read();

    // Employee* empPtr = new Employee(); // Heap
    // empPtr->age = 42;
    // empPtr->Read();

    // void* ptr = malloc(20);
    // int* intPtr = new int; // new means you are on the heap

    // *intPtr = 42;
    // printf("\n hex %00.x", *intPtr);
    // printf("\n hex %00.x", *(intPtr + 1));

    // Do stuff with heap memory

    // delete empPtr;

    // cout << "\n " << sizeof(Employee);

    // cout << "\n size 1: " << (sizeof(workers) / sizeof(workers[0])); // this is apparently needed
    // cout << "\n size 2: " << std::size(workers);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

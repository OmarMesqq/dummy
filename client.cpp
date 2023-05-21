// client.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <Windows.h>
#include <string>
#include "server.h"

int main() {

    std::string user;
    std::cout << "Enter your name: " << std::endl;
    std::cin >> user;
    giveText(user);
    return 0;
}

/* 

Reference: 

https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp
*/

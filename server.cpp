#include "pch.h" 
#include <iostream>
#include <string>
#include "server.h"


static unsigned long long previous_;  // Previous value, if any
static unsigned long long current_;   // Current sequence value
static unsigned index_;


void giveText(std::string input) {
    
	std::cout << "The header file says: Hello, " << input  << std::endl; 

}

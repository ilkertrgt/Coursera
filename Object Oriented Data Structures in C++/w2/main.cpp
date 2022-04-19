/**
 * @file main.cpp
 * University of Illinois
 * Object-Oriented Data Structures in C++ - Week 2
 * Hello World Project
 *
 * @author Ilker Turgut - April 2022
**/

#include <iostream>

// using namespace std;

// Notes:

// If you get a compiler error saying "undefined reference to main",
// it means you haven't defined your main function correctly.

// Standard output is the system stream for normal text output on the terminal.
// One way to write to it, that you have learned, is with std::cout.

// Your main function should write the following messages to standard output:
// Hello, world!
// Greetings from Illinois!

// Also note, the autograder does not care about letter case, punctuation,
// or spacing! But it does care about spelling and the order of words!

int main() {

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Greetings from Illinois!" << std::endl;
    
    return 0;
}


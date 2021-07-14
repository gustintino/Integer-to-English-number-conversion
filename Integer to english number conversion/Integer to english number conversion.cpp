#include <iostream>
#include <string>

#include "numberToString.h"
#include "word.h"
#include "bigNumber.h"

int main()
{
    std::string input;

    std::cout << "Insert a number: " << std::endl;
    std::cin >> input;
    std::cout << word(input);
}


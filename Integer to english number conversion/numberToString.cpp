#include <iostream>
#include "numberToString.h"

std::string numToString(int broj)
{
    switch (broj) {
    case '1':
        return "one ";
    case '2':
        return "two ";
    case '3':
        return "three ";
    case '4':
        return "four ";
    case '5':
        return "five ";
    case '6':
        return "six ";
    case '7':
        return "seven ";
    case '8':
        return "eight ";
    case '9':
        return "nine ";
    }

    return " SOMETHING IS WRONG ";
}

std::string numToStringBig(int broj, int nextBroj)
{
    switch (broj) {
    case '1':
        return numToStringTeen(nextBroj); 
    case '2':
        return "twenty ";
    case '3':
        return "thirty ";
    case '4':
        return "forty ";
    case '5':
        return "fifty ";
    case '6':
        return "sixty ";
    case '7':
        return "seventy ";
    case '8':
        return "eighty ";
    case '9':
        return "ninety ";
    }

    return " SOMETHING IS WRONG ";
}

std::string numToStringTeen(int nextBroj)
{
    position--;

    switch (nextBroj)
    { 
    case '1': return "eleven ";
    case '2': return "twelve ";
    case '3': return "thirteen ";
    case '4': return "fourteen ";
    case '5': return "fifteen ";
    case '6': return "sixteen ";
    case '7': return "seventeen ";
    case '8': return "eighteen ";
    case '9': return "nineteen ";
    case '0': return "ten ";
    }

    return "TEEN PROBLEM";
}
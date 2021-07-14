#include <iostream>
#include "bigNumber.h"
#include "numberToString.h"

std::string bigNumber(int broj, int pos, int nextBroj)
{
    if (broj == '-')
    {
        return "negative ";
    }
    else
    {
        switch (pos)
        {
        case 1:
            return numToString(broj);
        case 2:
            return numToStringBig(broj, nextBroj);
        case 3:
            return numToString(broj);
        case 4:
            return numToString(broj);
        case 5:
            return numToStringBig(broj, nextBroj);
        case 6:
            return numToString(broj);
        case 7:
            return numToString(broj);
        case 8:
            return numToStringBig(broj, nextBroj);
        case 9:
            return numToString(broj);
        case 10:
            return numToString(broj);
        }
    }
    
    
    return "PROBLEM HERE";
}
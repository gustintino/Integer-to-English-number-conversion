#include <iostream>
#include "word.h"
#include "numberToString.h"
#include "bigNumber.h"

int position;

std::string word(std::string num)
{
    std::string number = "";


    for (position = num.length(); position > 0; position--)
    {
        number += bigNumber((int)num[num.length() - position], position, (int)num[(num.length() - position) + 1]);

        switch (position)
        {
        case 3:
            number += "hundred ";
            break;
        case 4:
            number += "thousand ";
            break;
        case 6: 
            number += "hundred ";
            break;
        case 7: 
            number += "million ";
            break;
        case 9:
            number += "hundred ";
            break;
        case 10:
            number += "billion ";
            break;
        }
    }

    return number;
}

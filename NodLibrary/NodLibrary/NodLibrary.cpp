#define LIB_EXPORT

#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "NodLibrary.h"
#include <iostream>

const char* NOD(int a, int b)
{
    const char *ANS1 = "Y";
    const char *ANS2 = "N";
    while (a != 0 and b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a + b == 1) 
    { 
        return (ANS1); 
    }
    else {
        return (ANS2);
    }
}
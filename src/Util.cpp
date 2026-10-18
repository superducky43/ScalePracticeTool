#include "Util.h"
#include <iostream>

using namespace std;

int Util::getInputInt()
{
    int input;
    cin >> input;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return input;
}


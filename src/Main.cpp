#include <iostream>
#include "Scale.h"
#include "Util.h"

using namespace std;

int main()
{
    cout << "Scale practice tool" << endl;
    cout << "-------------------" << endl;
    cout << "1) Generate random scale" << endl;
    cout << "2) Scale dictionary" << endl;

    int input = Util::getInputInt();

    if (input == 1)
    {
        Scale scale;
        scale.generateRandom();
    }

    cout << "Press enter to exit" << endl;
    cin.get();

    return 0; 
}

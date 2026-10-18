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

    cout << "Press enter to exit" << endl;
    cin.get();

    return 0; 
}

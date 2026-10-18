#include <iostream>
#include "Scale.h"
#include "Util.h"

using namespace std;

int main()
{
<<<<<<< HEAD
=======
    //Util util;
>>>>>>> 98ddd934ef9e0984a7cd91960e5bcae282bd39d1
    cout << "Scale practice tool" << endl;
    cout << "-------------------" << endl;
    cout << "1) Generate random scale" << endl;
    cout << "2) Scale dictionary" << endl;

<<<<<<< HEAD
    int input = Util::getInputInt();

    cout << "Press enter to exit" << endl;
    cin.get();
=======
    //int input = util.getInputInt();

    Scale scale;
    scale.generateRandom();
>>>>>>> 98ddd934ef9e0984a7cd91960e5bcae282bd39d1

    return 0; 
}

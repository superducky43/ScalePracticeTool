#include <string>

using namespace std;

class Note
{
    private:
        string name;
        int value = 1;

    public:
        void operator++();        
        void operator--();
        int getValue();
        string getName();
};

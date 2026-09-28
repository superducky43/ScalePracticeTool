#include <string>

using namespace std;

class Scale
{
    public:
        void generateRandom();
        Scale();
        Scale(string name, string root);
    private:
        string name;
        string root;
};

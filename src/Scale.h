#include <string>
#include <vector>

using namespace std;

class Scale
{
    public:
        void generateRandom();
        Scale();
        Scale(string name, string root);
    private:
        vector<string> formula;
        string name;
        string root;
};

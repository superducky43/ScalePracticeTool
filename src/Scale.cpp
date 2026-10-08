#include "Scale.h"
#include "json.hpp"
#include <fstream>
#include <unordered_map>
#include <vector>
#include <cstdlib>

using json = nlohmann::json;
using namespace std;

Scale::Scale()
{
}

Scale::Scale(string name, string root)
{
    this->name = name;
    this->root = root;
}

void Scale::generateRandom()
{
    std::ifstream file("data/scales.json"); 
    json fileContents;
    file >> fileContents;

    unordered_map<string, vector<string>> possibleScales;

    for (auto& [scaleName, formula] : fileContents["Major_modes"].items())
    {
        possibleScales[scaleName] = formula.get<vector<string>>();
    }
    for (auto& [scaleName, formula] : fileContents["Melodic_mminor_modes"].items())
    {
        possibleScales[scaleName] = formula.get<vector<string>>();
    }

    vector<string> possibleRoots = 
    {"C","G","D","A","E","B","F#","Gb","C#","Db","Ab","Eb","Bb","F"};

    int rootIndex = rand() % possibleRoots.size();
    int scaleTypeIndex = rand() % possibleScales.size();

    this->root = possibleRoots[rootIndex];
    this->name = 
}

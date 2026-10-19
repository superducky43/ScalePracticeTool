#include "Scale.h"
#include "json.hpp"
#include <fstream>
#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <iostream>

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

    unordered_map<string, vector<int>> possibleScales;

    vector<string> possibleScaleNames;
    vector<string> possibleRoots = 
    {"C","G","D","A","E","B","F#","Gb","C#","Db","Ab","Eb","Bb","F"};
    vector<int> formula;


    for (auto& [scaleName, formula] : fileContents["Major_modes"].items())
    {
        possibleScales[scaleName] = formula.get<vector<int>>();
        possibleScaleNames.push_back(scaleName);
    }
    for (auto& [scaleName, formula] : fileContents["Melodic_mminor_modes"].items())
    {
        possibleScales[scaleName] = formula.get<vector<int>>();
        possibleScaleNames.push_back(scaleName);
    }


    int rootIndex = rand() % possibleRoots.size();
    int scaleTypeIndex = rand() % possibleScales.size();

    this->name = possibleScaleNames[scaleTypeIndex];
    formula = possibleScales.at(this->name);

    //for debug purposes
    for (int i : formula) {
    cout << i << " ";
    }
    cout << endl;

    this->formula = formula;
}

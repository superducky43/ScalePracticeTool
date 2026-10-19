#include "Scale.h"
#include "json.hpp"
#include <fstream>
#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <iostream>

using json = nlohmann::json;
using namespace std;

//TODO:
//When making a new scale, the scale will make a vector with a certain amount of notes, each starting out as the root
//Then it will increment each of these notes as much as is specificed in the formula
//Logic for naming notes must also be done in the scale class as the relationships of the notes in between each other is important
//  1: check if the note is natural
//  (in any case, increment the letter name of the note by a letter)
//  2: if not:
//  3:      is it flat, sharp, double flat or double sharp?
//  4:      then check how far the next note is in the scale
//          depending on how far it is and if it is flat, sharp, double flat or double sharp, change the next modifier (#,b etc)
//          of the note accordingly
//It is important all the notes are initialized with the name of the root

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

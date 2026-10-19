#include <Note.h>

using namespace std;

Note::Note(string name)
{
    this->name = name;
}

void Note::operator++()
{
    if (this->value != 12)
    {
        
        this->value++;
    }
    else
    {
        this->value = 1;
    }
};

void Note::operator--()
{
    if (this->value != 1)
    {
        this->value--;
    }
    else
    {
        this->value = 12;
    }
};

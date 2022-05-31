#include <iostream>
#include <conio.h>

using namespace std;

class CDisplayFile
{
public:
    virtual ~CDisplayFile() = default;

    virtual void Display(const char* path)
    {
        //.....................
    }
};

class CDisplayFileBin
    : public CDisplayFile
{
public:
    virtual void Display(const char* path) override
    {
        //.................
    }
};

int main()
{
    CDisplayFile* files[2];
    files[0] = new CDisplayFile();
    files[1] = new CDisplayFileBin();

    for (size_t i = 0; i < 2; ++i)
        files[i]->Display("C:\1.txt");

    for (size_t i = 0; i < 2; ++i)
        delete files[i];

}
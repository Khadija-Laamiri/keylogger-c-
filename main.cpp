#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    char key = 'A';
    fstream stream;
    stream.open("file.txt", fstream::out);
    while (1)
    {
        if (kbhit())
        {
            key = getch();
            if (key == 27)
                break;
            stream << key;
        }
    }
    stream.close();
}

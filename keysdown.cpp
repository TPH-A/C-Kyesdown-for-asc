#include <iostream>
#include <cstdlib>
#include "conio.h"
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    while (true)
    {
        int ch = _getch();
        system("cls");
        cout << "Press 1 or 2to quit.\n";
        cout << "Keys:" << ch << endl;
        if (ch == 49 && 50)
        {
            break;
        }
    }

    return 0;
}
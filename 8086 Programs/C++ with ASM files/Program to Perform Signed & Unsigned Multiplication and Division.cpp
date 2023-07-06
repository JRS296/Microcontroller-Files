#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a, b, c, j;
    char m, Y, N, y, n;
    do
    {
        cout << "1.unsigned multiplication:"
             << "\n";
        cout << "2.signed multiplication:"
             << "\n";
        cout << "3.unsigned division:"
             << "\n";
        cout << "4.signed divsion:"
             << "\n";
        cout << "Enter ur choice";
        cin >> j;
        switch (j)
        {
        case 1:
        {
            cout << "Enter the first no.:"
                 << "\n";
            cin >> a;
            cout << "Enter the second no.:"
                 << "\n";
            cin >> b;
            if (a < 0 || b < 0)
            {
                cout << " only positive no.s are accepted ";
            }
            else
            {
                asm mov ax, a;
                asm mov bx, b;
                asm mul bx;
                asm mov c, ax;
                cout << "result=" << c << "\n";
                break;
            }
        }
        case 2:
        {
            cout << "Enter the first no.";
            cin >> a;
            cout << "Enter the second no.";
            cin >> b;
            asm mov ax, a;
            asm mov bx, b;
            asm mul bx;
            asm mov c, ax;
            cout << "result=" << c << "\n";
            break;
        }
        case 3:
        {
            cout << "Enter the first no.";
            cin >> a;
            cout << "Enter the second no.";
            cin >> b;
            if (a < 0 || b < 0)
            {
                cout << " only positive no.s are accepted ";
            }
            else
            {
                asm mov ax, a;
                asm mov bx, b;
                asm div bx;
                asm mov c, ax;
                cout << "result=" << c << "\n";
                break;
            }
        }
        case 4:
        {
            cout << "Enter the first no.";
            cin >> a;
            cout << "Enter the second no.";
            cin >> b;
            asm mov ax, a;
            asm mov bx, b;
            asm idiv bx;
            asm mov c, ax;
            cout << "result=" << c << "\n";
            break;
        }
        }
        cout << "Do you want to continue?(Y/N):\n";
        cin >> m;
    } while (m == 'y' || m == 'Y');

    getch();
}
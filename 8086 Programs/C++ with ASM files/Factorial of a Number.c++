#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a, b, ch, c;
    char x;
    do
    {
        cout << "Select an option:"
             << "\n";
        cout << "1.SQUARE"
             << "\n";
        cout << "2.CUBE"
             << "\n";
        cout << "3.FACT"
             << "\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter a number:";
            cin >> a;
            asm mov ax, a;
            asm mul ax;
            asm mov c, ax;
            cout << "The square is:" << c << "\n";
            cout << "Do you want to continue?" << endl;
            cin >> x;
            break;

        case 2:
            cout << "Enter a number:";
            cin >> a;
            asm mov ax, a;
            asm mov bx, a;
            for (int i = 0; i <= 1; i++)
            {
                asm mul bx;
            }
            asm mov c, ax;
            cout << "The cube is:" << c << "\n";
            cout << "Do you want to continue?" << endl;
            cin >> x;
            break;
        case 3:
            cout << "Enter a number:";
            cin >> a;
            b = a - 1;
            asm mov ax, a;
            for (b; b > 0; b--)
            {
                asm mov bx, b;
                asm mul bx;
            }
            asm mov c, ax;
            cout << "The fact is:" << c << "\n";
            cout << "do you want to continue?" << endl;
            cin >> x;
        }
    } while (x == 'y' || x == 'Y');
    getch();
}
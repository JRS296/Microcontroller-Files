#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a, res;
    cout << "\n Enter a number";
    cin >> a;
    asm mov ax, a asm mov bx, 02h asm div bx asm mov res, dx if (res == 0)
    {
        cout << "\n Even";
    }
    else cout << "\n Odd";
    getch();
}
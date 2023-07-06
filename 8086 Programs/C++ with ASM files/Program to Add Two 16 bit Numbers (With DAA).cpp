#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
    clrscr();
    int a, b, c;
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter Second Number:";
    cin >> b;
    asm mov ax, a asm mov bx, b asm add ax, bx asm daa asm mov c, ax cout << "Result:";
    cout << c;
    getch();
}
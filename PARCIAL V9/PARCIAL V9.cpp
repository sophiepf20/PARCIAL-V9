#include "pch.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace System;
using namespace std;


void cursor(int x, int y) {
    Console::SetCursorPosition(x, y);
}

void menu() {
    Console::ForegroundColor = ConsoleColor::White;
    cout << endl << " Presione 0 para continuar: ";
}

void WaitForKeypress() {
    while (!_kbhit()) {} // Espera a que se presione una tecla
    _getch();
}

//posx, posy,   valor,   palo
void carta(int x, int y, int carta, int palo)
{
    if (carta == 1)
    {
        Console::SetCursorPosition(x, y); cout << "A"; for (int i = 1; i <= 11; i++) cout << (char)196; cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; for (int i = 1; i <= 11; i++) cout << (char)196; cout << "A";
    }
    if (carta == 2)
    {
        Console::SetCursorPosition(x, y); cout << carta; for (int i = 1; i <= 5; i++)cout << (char)196; cout << (char)palo; for (int i = 1; i <= 5; i++)cout << (char)196; cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; for (int i = 1; i <= 5; i++)cout << (char)196; cout << (char)palo; for (int i = 1; i <= 5; i++)cout << (char)196; cout << carta;
    }
    if (carta == 3)
    {
        Console::SetCursorPosition(x, y); cout << carta; for (int i = 1; i <= 5; i++)cout << (char)196; cout << (char)palo; for (int i = 1; i <= 5; i++)cout << (char)196; cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; for (int i = 1; i <= 5; i++)cout << (char)196; cout << (char)palo; for (int i = 1; i <= 5; i++)cout << (char)196; cout << carta;
    }
    if (carta == 4)
    {
        Console::SetCursorPosition(x, y); cout << carta; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo;   cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo; cout << carta;
    }
    if (carta == 5)
    {
        Console::SetCursorPosition(x, y); cout << carta; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo;   cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo; cout << carta;
    }
    if (carta == 6)
    {
        Console::SetCursorPosition(x, y); cout << carta; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo;   cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; cout << (char)palo; for (int i = 1; i <= 9; i++) cout << " "; cout << (char)palo;  cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo; cout << carta;
    }
    if (carta == 7)
    {
        Console::SetCursorPosition(x, y); cout << carta; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo;   cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; cout << (char)palo; for (int i = 1; i <= 9; i++) cout << " "; cout << (char)palo;  cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo; cout << carta;
    }
    if (carta == 8)
    {
        Console::SetCursorPosition(x, y); cout << carta; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo;   cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; cout << (char)palo; for (int i = 1; i <= 9; i++) cout << " "; cout << (char)palo;  cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo; cout << carta;
    }
    if (carta == 9)
    {
        Console::SetCursorPosition(x, y); cout << carta; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo;   cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; cout << (char)palo; for (int i = 1; i <= 9; i++) cout << " "; cout << (char)palo;   cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; cout << (char)palo; for (int i = 1; i <= 9; i++) cout << " "; cout << (char)palo;   cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo; cout << carta;
    }
    if (carta == 10)
    {
        Console::SetCursorPosition(x, y); cout << carta; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo;   cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; cout << (char)palo; for (int i = 1; i <= 9; i++) cout << " "; cout << (char)palo;   cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; cout << (char)palo; for (int i = 1; i <= 9; i++) cout << " "; cout << (char)palo;   cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)palo; for (int i = 1; i <= 5; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; cout << (char)palo; for (int i = 1; i <= 9; i++)cout << (char)196; cout << (char)palo; cout << carta;
    }
    if (carta == 11)
    {
        Console::SetCursorPosition(x, y); cout << "J"; for (int i = 1; i <= 11; i++) cout << (char)196; cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)176; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)177; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178;  cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)176; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)177; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; for (int i = 1; i <= 11; i++) cout << (char)196; cout << "J";
    }
    if (carta == 12)
    {
        Console::SetCursorPosition(x, y); cout << "Q"; for (int i = 1; i <= 11; i++) cout << (char)196; cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)176; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)177; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178;  cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)176; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)177; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; for (int i = 1; i <= 11; i++) cout << (char)196; cout << "Q";
    }
    if (carta == 13)
    {
        Console::SetCursorPosition(x, y); cout << "K"; for (int i = 1; i <= 11; i++) cout << (char)196; cout << (char)191;
        Console::SetCursorPosition(x, y + 1); cout << (char)palo; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)179;
        Console::SetCursorPosition(x, y + 2); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178; cout << (char)179;
        Console::SetCursorPosition(x, y + 3); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178; cout << (char)179;
        Console::SetCursorPosition(x, y + 4); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)177; cout << (char)179;
        Console::SetCursorPosition(x, y + 5); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)177;  cout << (char)179;
        Console::SetCursorPosition(x, y + 6); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)176; cout << (char)179;
        Console::SetCursorPosition(x, y + 7); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)176; cout << (char)179;
        Console::SetCursorPosition(x, y + 8); cout << (char)179; for (int i = 1; i <= 11; i++) cout << (char)178; cout << (char)179;
        Console::SetCursorPosition(x, y + 9); cout << (char)179; for (int i = 1; i <= 11; i++) cout << " "; cout << (char)palo;
        Console::SetCursorPosition(x, y + 10); cout << (char)192; for (int i = 1; i <= 11; i++) cout << (char)196; cout << "K";
    }
}


//MAIN

int main()
{
    void Presentacion();
    {
        Console::ForegroundColor = ConsoleColor::White;
        cout << endl << "                                      Universidad Peruana de Ciencias Aplicadas - UPC";
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << endl << "                                      TRABAJO PARCIAL - INTRODUCCION A LOS ALGORITMOS";
        Console::ForegroundColor = ConsoleColor::Red;
        cout << endl << " ";
        Console::ForegroundColor = ConsoleColor::DarkYellow;
        cout << endl << "                                           Presentacion de juego: mBlack y mJack";
    }

    void UPC();
    {
        Console::ForegroundColor = ConsoleColor::DarkRed;
        Console::SetCursorPosition(30, 8); cout << "                            ##";
        Console::SetCursorPosition(30, 9); cout << "                         ,###.";
        Console::SetCursorPosition(30, 10); cout << "            #           #####*                   #";
        Console::SetCursorPosition(30, 11); cout << "         .#/           #######                    /#.";
        Console::SetCursorPosition(30, 12); cout << "        ##*            #########.                  *##";
        Console::SetCursorPosition(30, 13); cout << "      .###             ############                 ###.";
        Console::SetCursorPosition(30, 14); cout << "      ###              #############                 ###";
        Console::SetCursorPosition(30, 15); cout << "     #####              ############                #####";
        Console::SetCursorPosition(30, 16); cout << "     #####              ############                #####";
        Console::SetCursorPosition(30, 17); cout << "     #####                ###########                #####";
        Console::SetCursorPosition(30, 18); cout << "     ######                #########.               ######";
        Console::SetCursorPosition(30, 19); cout << "     ########                #######               ########";
        Console::SetCursorPosition(30, 20); cout << "      ########               #####                ########";
        Console::SetCursorPosition(30, 21); cout << "       ##########            ####             ##########";
        Console::SetCursorPosition(30, 22); cout << "        ##########           ##              ##########";
        Console::SetCursorPosition(30, 23); cout << "         #############################################";
        Console::SetCursorPosition(30, 24); cout << "           #########################################";
        Console::SetCursorPosition(30, 25); cout << "             #####################################";
        Console::SetCursorPosition(30, 26); cout << "                 #############################";
        Console::SetCursorPosition(30, 27); cout << "                      ###################";

        Console::SetCursorPosition(30, 28); cout << " ";
    }

    int opcion;
    bool salir = false;

    while (!salir) {
        menu();
        cin >> opcion;

        switch (opcion) {
        case 0:
            cout << endl << " Test 1";
            system("cls");
            break;
        case 2:
            cout << endl << " Test 2";

            break;
        case 3:
            cout << endl << " Test 3";

            break;
        case 4:
            salir = true;
            break;
        default:
            cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
            break;
        }

        if (!salir) {
            WaitForKeypress();
        }
    }

    void carta();
    {
        Console::SetWindowSize(80, 40);
        srand(time(nullptr));

        int valorAleatorio = rand() % 13 + 1;
        int valorAleatorio1 = rand() % 13 + 1;
        int valorAleatorio2 = rand() % 13 + 1;

        carta(20, 10, valorAleatorio, '2');
        carta(40, 10, valorAleatorio1, '3');
        carta(60, 10, valorAleatorio2, '1');
        

        bool salir = false;
        int opcion;

        while (!salir)
        {
            menu();
            cin >> opcion;

            switch (opcion)
            {
            case 1:
                // Código para otra carta
                break;
            case 2:
                // Código para quedarse
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
                break;
            }

            if (!salir)
            {
                WaitForKeypress();
            }
        }
            


    system("pause>0");
    system("Title Parcial 1");
    return 0;
    }
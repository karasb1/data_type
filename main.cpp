#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Name       : ";
	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "\"The war and the peace\"" << endl;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "Avtor      :   L.N. Tolstoj" << endl;
	cout << "Izdatelstvo:  Piter" << endl;
	cout << "Pages      : ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << "500" << endl;
	SetConsoleTextAttribute(hConsole, 0x07);
	return 0;
}
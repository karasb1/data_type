#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "\"U lukomor\'a dub zelenij," << endl;
	cout << " Zlataya zep na dupe tom," << endl;
	cout << " I dnem i nochju kot uchenij" << endl;
	cout << " vse hodit po cepi krugom\"" << endl;
	SetConsoleTextAttribute(hConsole, 0x07);
	return 0;
}
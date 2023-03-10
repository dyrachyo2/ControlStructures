#include<iostream>
#include<windows.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define UPPER_LEFT_ANGLE   (char)218
#define UPPER_RIGHT_ANGLE  (char)191
#define LOWER_LEFT_ANGLE   (char)192
#define LOWER_RIGHT_ANGLE  (char)217
#define HORIZONTAL_LINE    (char)196
#define VERTICAL_LINE      (char)179
#define WHITE_BOX          "\xDB\xDB"
#define BLACK_BOX          "\x20\x20"
//#define SHAHMOTNAYA_DOSKA

// Escape-Последовательность '\x'Позволяет добавить в строковую константу символ по его шестнадцатеричному коду  ASCII-коду

void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = {};
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);


	setlocale(LC_ALL, "");
#ifdef SHAHMOTNAYA_DOSKA

	int n;
	cout << "Введите размер доски: "; cin >> n;  n++;

	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;

			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);

		}
		cout << endl;

	}
#endif // SHAHMOTNAYA_DOSKA

	int h;
	cout << "Введите высоту треугольника: "; cin >> h;
	long long int nf = 1;
	for (int i = 0; i < h; i++) 
	{
		cout.width(4);
		cout << "";
	}
	cout.width(11);
	cout << "" << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		for (int i = n % 2 ? 1 : 0; i <= h - n; i++)
		{
			cout.width(4);
			cout << "    ";

		}
		if (n % 2)
		{
			cout.width(4);
			cout << "    ";

		}
			cout.width(8);
			cout << 1;
			nf *= n;
			long long int kf = 1;
			for (int k = 1; k <= n; k++)
			{
				kf *= k;
				long long int nkf = 1;
				for (int i = 1; i <= n - k; i++)nkf *= i;
				cout.width(8);
				cout << nf / kf / nkf;
			}
			cout << endl;
		}











}

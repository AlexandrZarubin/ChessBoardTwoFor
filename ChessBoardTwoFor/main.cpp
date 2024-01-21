#include<iostream>
using namespace std;
//using std::cout;
//using std::cin;
//using std::endl;
//
#define UPPER_LEFT_ANGELE	(char)218
#define UPPER_RIGHT_ANGELE	(char)191
#define LOWER_LEFT_ANGELE	(char)192
#define LOWER_RIGHT_ANGELE	(char)217
#define HORIZONTAL_LINE		(char)196<<(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"
#define BLACK_BOX			"\x20\x20"
//

void main()
{
	setlocale(LC_ALL, "rus");
	int BoardSize, CageSize;
	cout << "¬ведите размер доски "; cin >> BoardSize;
	cout << "¬ведите размер клетки "; cin >> CageSize;
	cout << endl;
	/*BoardSize++;
	CageSize++;*/
	setlocale(LC_ALL, "C");
	for (int i = 0; i < (BoardSize * CageSize)+1; i++)
	{
		for (int j = 0; j < (BoardSize * CageSize)+1; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGELE;
			else if (i == 0 && j == BoardSize * CageSize)cout << UPPER_RIGHT_ANGELE;
			else if (i == BoardSize * CageSize && j == 0)cout << LOWER_LEFT_ANGELE;
			else if (i == BoardSize * CageSize && j == BoardSize * CageSize)cout << LOWER_RIGHT_ANGELE;
			else if (i == 0 || i == BoardSize * CageSize)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == BoardSize * CageSize)cout << VERTICAL_LINE;
			else if ((i / CageSize)%2==(j / CageSize) % 2)cout << WHITE_BOX;
			else cout << BLACK_BOX;
		}
		cout << endl;
	}
}
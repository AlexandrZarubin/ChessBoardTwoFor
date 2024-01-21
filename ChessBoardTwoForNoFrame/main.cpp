#include<iostream>

using std::cout;
using std::cin;
using std::endl;
//
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
	for (int i = 0; i < BoardSize * CageSize ; i++)
	{
		for (int j = 0; j < BoardSize * CageSize; j++)
		{
			if (!((i / CageSize + j / CageSize) % 2))cout << WHITE_BOX;
			else cout << BLACK_BOX;
		}
		cout << endl;
	}
}
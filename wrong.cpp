#include <iostream>
using namespace std;
int sudoku[9][9],x,y,sx,sy;
bool Test()
{
	for (int i = 0; i < 9; ++i)
		if (sudoku[y][i] == sudoku[y][x] && i != x)
			return false;
	for (int i = 0; i < 9; ++i)
		if (sudoku[i][x] == sudoku[y][x] && i != y)
			return false;
	sy = y / 3 * 3;
	sx = x / 3 * 3;
	for (int i = sy; i < sy + 3; ++i)
		for (int k = sx; k < sx + 3; ++k)
			if (sudoku[i][k] == sudoku[y][x] && i != y && k != x)
				return false;
	return true;
}
void guess(int count)
{
	if (count == 81)
	{
		for (int i = 0; i < 9; ++i)
		{
			for (int j = 0; j < 9; ++j)
				cout << sudoku[i][j] << " ";
			cout << endl;
		}
		return;
	}
	y = count / 9;
	x = count % 9;
	if (sudoku[y][x] == 0)
	{
		for (int i = 1; i <= 9; ++i)
		{
			sudoku[y][x] = i;
			if (Test())
				guess(count + 1);
		}
		sudoku[y][x] = 0;
	}
	else
		guess(count + 1);
}
int main()
{
	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < 9; ++j)
			cin >> sudoku[i][j];
	cout << endl;
	guess(0);
	system("PAUSE");
	return 0;
}

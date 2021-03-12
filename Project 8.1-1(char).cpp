// Lab_8_1-1.cpp
// < Кузів Назар >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 6

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
 Вияснити, чи є серед цих символів пара сусідніх букв “SQ” або ”QS”.
*/



int Include(char* s)
{
	int i = 0,
		pos = 0;
	char* t;

	while (t = strchr(s + pos, 'S'))
	{
		pos = t - s + 1;

		if (s[pos] == 'Q')
		{
			i++;
			break;
		}	
	}
	if (i > 0)
		return i;
	else
	{ 
		pos = 0;

		while (t = strchr(s + pos, 'Q'))
		{
			pos = t - s + 1;

			if (s[pos] == 'S')
			{
				i++;
				break;
			}
		}
	}
	
	return i;
}

int main()
{
	char s[51];

	cout << "Enter string:" << endl;
	cin.getline(s, 50);
	cout << endl;

	int I = Include(s);
	if(I > 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}
#include <iostream>
using namespace std;

// 선언 프로토타입

int input();
bool process(int year);
void output(int year, bool result);

int main()
{

	while(true)
	{
		int year = input();
	if (year == 0)
		{
			return 0;
		}

	bool result = process(year);
	output(year, result);
	
	}
	return 0;
}


int input()
{
	int year;
	do
	{
		cout << "1582년 이후의 연도를 입력하세요 : ";
		cin >> year;

	}while(year<=1582 && year != 0);
	// 센티널 0 : 1582 이하 모든 숫자였던 것에서 0만 빼낸다.
	return year;
}

bool process(int year)
{
	bool criteria1 = (year % 4 == 0);
	bool criteria2 = (year % 100 != 0) || (year % 400 == 0);
	return (criteria1) && (criteria2);
}

void output(int year, bool result)
{
	if(result)
	{
		cout << year << "년은 윤년입니다." << endl;
	}
	else
	{
		cout << year << "년은 윤년이 아니옵니다." << endl;
	}

}




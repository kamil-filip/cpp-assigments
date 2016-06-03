#include <iostream>

using namespace std;

#define MONDAY4 15

enum Month1
{
	JANUARY,
	FEBRAURY,
	MARCH,
	APRIL
}

enum Month2
{
	JANUARY,
	FEBRAURY,
	MARCH,
	APRIL
}

enum EWDays
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNSEDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
};

enum class ESDays
{
	SUNDAY,
	MONDAY = 1,
	TUESDAY,
	WEDNSEDAY,
	THURSDAY,
	FRIDAY,
	SATURDA2
};


int main()
{
	EWDays monday0 = MONDAY;
	EWDays monday1 = MONDAY;
	ESDays monday01 = ESDays::MONDAY;
	ESDays monday11 = ESDays::MONDAY;



	if(monday0 == 1)
	{
		cout<<"Are the same \n";
	}

	if(monday01 == monday11)
	{
		cout<<"Are the same \n";
	}



	return 0;
}

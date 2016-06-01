#include <iostream>
//'a' = 97

int main()
{
	char ch = 'a';
	auto result1 = 3 * 'a';	
	char result2 = 3 * ch;

	std::cout<<  result1 <<"\n"; //291 a is casting to the int and it's overflow of variable there is an implicit conversion
	std::cout<<  result2 << "\n"; //291 - 256 = 36

	return 0;
}

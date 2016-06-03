#include <iostream>

using namespace std;

int main()
{
	size_t value;	
	
	cin >> value;

	cout << "unsigned value: "<< value << 
			  " , as character: `" << static_cast<char>(value) <<"'\n";
	
	char ch = static_cast<char>(value);
	
	cout << "unsigned value: "<< static_cast<size_t>(ch) << 
			  " , as character: `" << ch <<"'\n";

	return 0;
}

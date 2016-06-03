#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv [])
{
	
	
	double firstArg = atof(argv[1]);
	double thirdArg = atof(argv[3]);
	string secondArg = argv[2];

	cout<< firstArg << " " << secondArg<< " " << thirdArg <<"\n"
		 << firstArg + stof(secondArg + to_string(thirdArg)) <<"\n";

}


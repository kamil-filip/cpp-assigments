#include <iostream>
#include <string>
#include <cstring>
/*
    object is always a string-object;
    argument is a string const & or a char const * unless indicated otherwise. The contents of an argument never is modified by the operation processing the argument;
    opos refers to an offset into an object string;
    apos refers to an offset into an argument;
    on represents a number of characters in an object (starting at opos);
    an represents a number of characters in an argument (starting at apos). 
*/


using namespace std;

int main(int argc, const char* argv[])
{
	//1 statement name of the program	
	std::string name("Excercise 13");

	//2 std string filled with stars
	string stars = std::string(name.length(), '*');

	//3 adding ipv4 adress plus dots
	cout << name.insert(name.length(), " " + string(argv[1])).
				    insert(name.length()+5,1,'.').
					 insert(name.length()+10,1,'.') <<"\n";
	
	//4 removing dots from the adress
	cout << ((name).erase(name.find('.', 0),1)).erase(name.find('.', 0) + 4,1) << "\n";
	
	//5. assign the second string
	argv[1] = const_cast<char *>(stars.c_str());     

	//6. This cast has to be used because argv is represented as const char, above operations
	//   is a bad idea because all what is const is on purpose

	//7. Second argument store as a string 
	name = argv[2];

	//8. Replacing forward slashes
	string::npos != name.find("\\") ? 
		name = "modified to " + name.replace(name.find("\\"),1,1,' ').replace(name.rfind("\\"),1,1,' ') : 
		name = "does not contain two forward slashes " + name;

	// 9. concat of two string
	string merged = name + stars;
	
	// 10. swapping strings
	stars.swap(name);
	cout << stars;

	// 11. difference between cin>> str and getline(cin, str);
	// I guess that difference is reasond by way of getting data, cin>>str loads all the 
	// stream and getline method until recognizing new line character


	// 12 at() returns reference to the current char and we cannot move it, [] returns a pointer to that element which can be moved

	return 0;
}

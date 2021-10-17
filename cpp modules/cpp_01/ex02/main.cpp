#include <iostream>
using namespace std;

int	main(void)
{
	string str = "HI THIS IS BRAIN";
	cout << "str: " << str << endl;
	string *stringPTR = &str;
	cout << "strinPTR: " << *stringPTR << endl;
	string &stringREF = str;
	cout << "stringREF: " << stringREF << endl;

	return (0);
}
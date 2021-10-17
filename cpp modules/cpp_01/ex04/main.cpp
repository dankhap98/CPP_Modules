#include "Replace.hpp"

static size_t	strlen(char *str)
{
	size_t size = 0;
	while (str[size])
		size++;
	return (size);
}

int main(int argc, char **argv)
{
	if (argc != 4 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cerr << "incorrect input form" << std::endl;
		return (1);
	}
	Replace toReplace(argv[1], argv[2], argv[3]);
	toReplace.read_text();
	toReplace.replace();
	return 0;
}
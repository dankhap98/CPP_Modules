#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen   Karen_sys;
	if (argc != 2)
	{
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	std::string level = argv[1];
    Karen_sys.complain(level);
    return (0);
}
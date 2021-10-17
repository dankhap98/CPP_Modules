#include "easyfind.hpp"
#include <vector>

int main(int argc, char** argv)
{
    int num = 5;
    if (argc > 1)
        num = atoi(argv[1]);
    
    std::vector<int> vector;

    for (int i = 0; i < 10; i++)
    {
        vector.push_back(i);
        std::cout << vector[i] << " ";
    }

    std::cout << std::endl << std::endl;

    try
    {
        easyfind(vector, num);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
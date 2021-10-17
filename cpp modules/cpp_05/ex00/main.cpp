#include "Bureaucrat.hpp"
#include <iostream>


int     main()
{
    {
        std::cout << "========== over grade ===========" << std::endl;
        try
        {
            Bureaucrat buro("hyeolee", -1);
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            Bureaucrat buro("team1", 1);
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

    }
    {
        std::cout << "========== lower grade ===========" << std::endl;
        try
        {
            Bureaucrat buro("hyeolee", 188);
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            Bureaucrat buro("team2", 150);
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=========== Copy constructor ========" << std::endl;
        try
        {
            Bureaucrat buro("Tim", 144);
            Bureaucrat copy(buro);
            std::cout << "<Copy>" << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}
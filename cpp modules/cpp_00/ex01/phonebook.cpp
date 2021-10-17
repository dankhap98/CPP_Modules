#include "Class.Phonebook.hpp"

static void	title(void)
{
	std::cout <<"\033[0;31m"<< std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to your phonebook !\nThe available entries are : " << std::endl;
	std::cout << " - ADD \n - SEARCH \n - EXIT \n" << std::endl;
}

int	main()
{
	std::string input;
	phonebook records[8];
	size_t rec_count = 0;

	title();
	getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD" && rec_count < 8)
		{
			records[rec_count].setup();
			rec_count++;
		}
		if (input == "ADD" && rec_count == 8)
			records[0].setup();
		if (input == "SEARCH")
		{
			std::cout<<std::setw(10)<<"index"<<"|";
			std::cout<<std::setw(10)<<"first name"<<"|";
			std::cout<<std::setw(10)<<"last name"<<"|";
			std::cout<<std::setw(10)<<"nickname"<<std::endl;
			for (size_t i = 0; i < rec_count; i++)
			{
				std::cout<<"         "<<i<<".";
				records[i].display_contact();
			}
		}
		getline(std::cin, input);
	}
	std::cout<<"\033[0m";
	
	return(0);
}
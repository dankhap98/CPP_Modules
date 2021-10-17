#include "Replace.hpp"

Replace::Replace(std::string const filename, std::string const str1, std::string const str2)
{
	this->_filename = filename;
	this->_str1 = str1;
	this->_str2 = str2;
	this->flag = true;
}

Replace::~Replace(void)
{

}

void	Replace::read_text(void)
{
	std::string text;
	char tmp;
	std::ifstream file (_filename);
	if (file.is_open())
	{
		while(!file.eof()){
			file.get(tmp);
			text += tmp;
		}
		this->_text = text;
	}
	else
	{
		std::cerr << "can not open: " << this->_filename << std::endl;
		this->flag = false;
	}
	
	file.close();
}

void	Replace::replace(void)
{
	std::string	new_text;
	size_t	count = -1;
	size_t	id = 0;
	size_t	begin = 0;
	if (this->flag != false)
	{
		std::ofstream	newfile(this->_filename + ".replace");
		if (newfile.is_open())
		{
			while(id <= this->_text.length())
			{
				if ((id = this->_text.find(this->_str1, id)) != -1)
				{
					new_text += this->_text.substr(begin, id - begin) + this->_str2;
					id += this->_str1.length();
					begin = id;
				}
				else
				{
					if (begin != 0)
					{
						new_text += this->_text.substr(begin);
					}
				}
			}
			std::cout << new_text;
			newfile << new_text;
			newfile.close();
		}	
	}
}
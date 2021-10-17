
#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace {

public:
	Replace(std::string const filename, std::string const str1, std::string const str2);
	~Replace();

	void	read_text(void);
	void	replace(void);

private:
	bool		flag;
	std::string _filename;
	std::string _str1;
	std::string _str2;
	std::string _text;

};

#endif
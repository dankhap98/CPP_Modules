
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data* deserialize(uintptr_t raw)
{
	Data*		ret;

	ret = reinterpret_cast<Data*>(raw);
	return (ret);
}

int				main()
{
	Data		*data;
	uintptr_t	tmp;

	data = new Data;
	data->_string = "string";
	data->_int = 123;

	std::cout << "_string before serialize: " << data->_string << std::endl;
	std::cout << "_int before serialize: " << data->_int <<std::endl;

	std::cout << "first pointer value: " << reinterpret_cast<uintptr_t>(data) << std::endl;
	tmp = serialize(data);
	std::cout << "serialized return value: " << tmp << std::endl;

	Data *tmp2 = deserialize(tmp);
	std::cout << "_string deserialized: " << tmp2->_string << std::endl;
	std::cout << "_int deserialized: " << tmp2->_int << std::endl;
	delete tmp2;
	return (0);
}

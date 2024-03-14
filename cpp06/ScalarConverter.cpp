#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter : Default Constructor Called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter : Destructor Called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}

bool isallDigit(const std::string &str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if(!isdigit(str[i]))
		{
			std::cout << "not numbers" << std::endl;
			return false;
		}
			std::cout << "numbers" << std::endl;
	}
	return true;
}
void ScalarConverter::convert(const std::string &str)
{
	// if(str.length =
	if(isallDigit(str) == false)
		
	if(str.length() == 1)
		std::cout << "length is 1" << std::endl;
	
	// charConvert(str);
	// intConvert(str);
	// floatConvert(str);
	// doubleConvert(str);
}
/* static void charConvert(const std::string &str)
{

} */
// static void intConvert(const std::string &str)
// {
// }
// static void floatConvert(const std::string &str)
// {
// }
// static void doubleConvert(const std::string &str)
// {
// }
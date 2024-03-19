#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalarConverter : Default Constructor Called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "ScalarConverter : Destructor Called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}

bool ScalarConverter::isNbr(const std::string &str)
{
	try
	{
		std::stoi(str);
		std::stof(str);
		std::stod(str);
		return true;
	}
	catch (const std::exception &e)
	{
		// std::cerr << e.what() << '\n';
		return false;
	}
	return false;
}
bool ScalarConverter::isChar(const std::string &str)
{
	return str.length() == 1;
}

void ScalarConverter::convert(const std::string &str)
{

	if (isNbr(str))
	{
		charConvert(str);
		intConvert(str);
		doubleConvert(str);
		floatConvert(str);
	}
	else if (isChar(str))
	{
		std::cout << "Character: '" << str[0] << "'" << std::endl;
		intConvert(str);
		doubleConvert(str);
		floatConvert(str);
	}
	else
	{
		if (str == "-inff" || str == "-inf")
		{
			std::cout << "Character: overflow" << std::endl;
			std::cout << "Int: overflow" << std::endl;
			std::cout << "Double: -inf" << std::endl;
			std::cout << "Float: -inf" << std::endl;
		}
		else if (str == "+inff" || str == "+inf")
		{
			std::cout << "Character: overflow" << std::endl;
			std::cout << "Int: overflow" << std::endl;
			std::cout << "Double: inf" << std::endl;
			std::cout << "Float: inf" << std::endl;
		}
		else if (str == "nan" || str == "nanf")
		{
			std::cout << "Character: idk" << std::endl;
			std::cout << "Int: idk" << std::endl;
			std::cout << "Double: nan" << std::endl;
			std::cout << "Float: nan" << std::endl;
		}
		else
			std::cout << "sus input: " << str << std::endl;
	}
}
void ScalarConverter::charConvert(const std::string &str)
{
	if (isNbr(str))
	{
		int value = stoi(str);
		if (value >= 0 && value <= 127)
		{
			if (value >= 32 && value <= 126)
			{
				char charValue = static_cast<int>(value);
				std::cout << "Character: '" << charValue << "'" << std::endl;
			}
			else
				std::cout << "Character: is not printable" << std::endl;
		}
		else
			std::cout << "Character: sus" << std::endl;
	}
}
void ScalarConverter::intConvert(const std::string &str)
{
	if (isChar(str))
	{
		char character = str[0];
		int intValue = static_cast<int>(character);
		std::cout << "Int: " << intValue << std::endl;
	}
	else
	{
		try
		{
			std::cout << "Int: " << std::stoi(str) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
void ScalarConverter::floatConvert(const std::string &str)
{
	if (isChar(str))
	{
		char character = str[0];
		float fValue = static_cast<float>(character);
		std::cout << "Float: " << fValue << std::endl;
	}
	else
	{
		try
		{
			std::cout << "Float: " << std::stof(str) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
void ScalarConverter::doubleConvert(const std::string &str)
{
	if (isChar(str))
	{
		char character = str[0];
		double dValue = static_cast<double>(character);
		std::cout << "Double: " << dValue << std::endl;
	}
	else
	{

		try
		{
			std::cout << "Double: " << std::stod(str) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
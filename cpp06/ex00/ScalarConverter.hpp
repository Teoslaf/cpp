#ifndef _ScalarConverter_HPP_
#define _ScalarConverter_HPP_

#include <iostream>
#include <string>


// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class ScalarConverter
{
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &obj);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &obj);
	static void convert(const std::string &str);
	static bool isNbr(const std::string &str);
	static bool isChar(const std::string &str);
	static int convertToInt(const std::string &str);

private:
	static void charConvert(const std::string &str);
	static void intConvert(const std::string &str);
	static void floatConvert(const std::string &str);
	static void doubleConvert(const std::string &str);

	//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif

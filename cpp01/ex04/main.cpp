#include "main.hpp"

void openSave(const std::string &filename, const std::string &s1, const std::string &s2)
{
	(void)s2;
	std::ifstream file(filename);
	if (file.is_open())
	{
		std::stringstream strStream;
		strStream << file.rdbuf();
		std::string str = strStream.str();
		std::cout << str << std::endl;
		size_t pos = str.find(s1);
		while (pos != std::string::npos)
		{
			str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
			pos = str.find(s1, pos + s2.length());
		}
		std::ofstream outFile(filename + ".relace");
		if(outFile.is_open())
			outFile << str;
		else
		std::cout << "problem" << std::endl;
	}
	else
		std::cout << "wrong filename" << std::endl;
	file.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		openSave(filename, s1, s2);
	}
	else
		std::cout << "give me filename, s1 and s2" << std::endl;
}

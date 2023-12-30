#include "main.hpp"

void openSave(const std::string& filename, const std::string& s1, const std::string& s2)
{
	(void)s2;
		std::ifstream file(filename);
		if(file.is_open())
		{
			std::stringstream strStream;
			strStream << file.rdbuf();
			std::string str = strStream.str();
			std::cout << str << std::endl;
			size_t pos = str.find(s1);
			std::cout << pos << std::endl;

		}
		else
			std::cout << "wrong filename" << std::endl;
		file.close();
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		openSave(filename, s1, s2);
		// std::cout << file << std::endl;
		// std::ofstream file("relace");
		// file << s1;
		// file.close();
	}
	else
		std::cout << "give me filename, s1 and s2" << std::endl;
}

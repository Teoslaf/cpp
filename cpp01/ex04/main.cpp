#include "main.hpp"

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		std::cout << "filename :" << argv[1] << std::endl;
		std::cout << "s1 :" << argv[2] << std::endl;
		std::cout << "s2 :" << argv[3] << std::endl;
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ifstream file(filename);
		if(file.is_open())
			std::cout << file.rdbuf() << std::endl;
		else
			std::cout << "wrong filename" << std::endl;
		// std::cout << file << std::endl;
		// std::ofstream file("relace");
		// file << s1;
		// file.close();
	}
	else
		std::cout << "give me filename, s1 and s2" << std::endl;
}

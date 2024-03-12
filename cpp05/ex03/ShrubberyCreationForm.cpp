#include "ShrubberyCreationForm.hpp"

std::string const &ShrubberyCreationForm::name = "Shrubbery Creation Form";

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(ShrubberyCreationForm::name,
	145, 137), target("defalut")
{
	// std::cout << "ShrubberyCreationForm : Default Constructor Called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(ShrubberyCreationForm::name,
	145, 137), target(target)
{
	// std::cout << "ShrubberyCreationForm : target Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm : Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->target = obj.target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream outFile((this->target + "_shrubbery").c_str());
	std::string str = "";
	str += "            .        +          .      .          .\n";
	str += "     .            _        .                    .\n";
	str += "  ,              /;-._,-.____        ,-----.__\n";
	str += " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n";
	str += "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n";
	str += "                      ,    `./  \\:. `.   )==-'  .\n";
	str += "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n";
	str += ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n";
	str += "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n";
	str += "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n";
	str += "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n";
	str += "              \\:  `  X` _| _,\\/\\'   .-'\n";
	str += ".               \":._:`\\____  /:'  /      .           .\n";
	str += "                    \\::.  :\\/:'  /              +\n";
	str += "   .                 `.:.  /:'  }      .\n";
	str += "           .           ):_(:;   \\           .\n";
	str += "                      /:. _/ ,  |\n";
	str += "                   . (|::.     ,`                  .\n";
	str += "     .                |::.    {\\\n";
	str += "                      |::. \\  `.\n";
	str += "                      |:::(\\    |\n";
	str += "              O       |:::/{ }  |                  (o\n";
	str += "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n";
	str += "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n";

	if (outFile.is_open())
		outFile << str;
	else
		std::cout << "problem" << std::endl;
}

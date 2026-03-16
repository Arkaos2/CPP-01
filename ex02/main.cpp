#include <iostream>
#include <memory>
int main()
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << "adresse de variable : "  << &variable << std::endl;
	std::cout << "adresse de stringPTR : "  << &stringPTR << std::endl;
	std::cout << "adresse de stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "valeur de variable : "  << variable << std::endl;
	std::cout << "valeur de stringPTR : "  << stringPTR << std::endl;
	std::cout << "valeur de stringREF : " << stringREF << std::endl;

}

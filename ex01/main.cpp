#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try
	{
		Bureaucrat juan("juan", 35);
		Bureaucrat paco("paco", 130);

		Form taxes("taxes", 100, 50);
		std::cout << taxes << std::endl;
		
		std::cout << std::endl;
		juan.signForm(taxes);

		std::cout << std::endl;
		std::cout << taxes << std::endl;
		
		std::cout << std::endl;
		paco.signForm(taxes);
	}
	catch(const std::exception& e)
	{
		std::cerr << "exception " << e.what() << std::endl;
	}
	
}
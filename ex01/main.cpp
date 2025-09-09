#include "Bureaucrat.hpp"

int main() {
	{
		try
		{
			Bureaucrat b("Paco", 2);
			std::cout << b << std::endl;
			b.incrementGrade();
			std::cout << b << std::endl;
			b.incrementGrade();
		
		}
		catch(const std::exception& e)
		{
			std::cerr << "Caunght execption 1" << e.what()<< std::endl;
		}
	}
	std::cout << "------------------" << std::endl;
	{
		try
		{
			Bureaucrat b("Juan", 158);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Caunght execption 1" << e.what()<< std::endl;
		}
	}
}
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    try {
        Bureaucrat paco("paco", 1);
        Bureaucrat juan("juan", 50);
        Bureaucrat pepe("pepe", 150);

        ShrubberyCreationForm shrub("shurb");
        RobotomyRequestForm robot("robot");
        PresidentialPardonForm pardon("pardon");
        
        std::cout << "\n";
        std::cout << "execute without signature" << std::endl;
        try {
            paco.executeForm(shrub);
        } catch (std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        std::cout << "\n";
        std::cout << "signature all form" << std::endl;
        paco.signForm(shrub);
        paco.signForm(robot);
        paco.signForm(pardon);

        pepe.executeForm(shrub);
        pepe.executeForm(robot);
        pepe.executeForm(pardon);

        std::cout << "\n";
        std::cout << "try to execute 'grade 50'" << std::endl;
        juan.executeForm(shrub);
        juan.executeForm(robot);
        juan.executeForm(pardon);

        std::cout << "\n";
        std::cout << "try to execute 'grade 1'" << std::endl;
        paco.executeForm(shrub);
        paco.executeForm(robot);
        paco.executeForm(pardon);
    }
    catch (std::exception &e) {
        std::cerr << "Excepción principal: " << e.what() << std::endl;
    }

    return 0;
}
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    try {
        // Bureaucrats con distintos niveles
        Bureaucrat high("paco", 1);
        Bureaucrat mid("juan", 50);
        Bureaucrat low("pepe", 150);

        // Formularios
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Ford Prefect");

        std::cout << "\n---- Intento de ejecutar sin firmar ----" << std::endl;
        try {
            high.executeForm(shrub);
        } catch (std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        std::cout << "\n---- Firmando todos los formularios ----" << std::endl;
        high.signForm(shrub);
        high.signForm(robot);
        high.signForm(pardon);

        // pepe no puede ejecutar ninguno
        low.executeForm(shrub);
        low.executeForm(robot);
        low.executeForm(pardon);

        std::cout << "\n---- juan (grade 50) intenta ejecutar ----" << std::endl;
        mid.executeForm(shrub);
        mid.executeForm(robot);
        mid.executeForm(pardon);

        std::cout << "\n---- paco (grade 1) ejecuta todos ----" << std::endl;
        high.executeForm(shrub);
        high.executeForm(robot);
        high.executeForm(pardon);
    }
    catch (std::exception &e) {
        std::cerr << "Excepción principal: " << e.what() << std::endl;
    }

    return 0;
}
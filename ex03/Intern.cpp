#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &) {}
Intern &Intern::operator=(const Intern &) { return *this; }
Intern::~Intern() {}

static AForm* createShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string const &formName, std::string const &target) {
	static const char* names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
	static AForm* (*creators[])(const std::string &) = {
        &createShrubbery,
        &createRobotomy,
        &createPresidential
    };

	for (size_t i = 0; i < sizeof(names)/sizeof(names[0]); i++)
	{
		if (formName == names[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return creators[i](target);			
		}
	}
	std::cerr << "Intern cannot create form: " << formName << std::endl;
    return NULL;
}
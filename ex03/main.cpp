#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Intern  someRandomIntern;
    AForm*  form;
    form = someRandomIntern.makeForm("form1", "juan");
    if (form)
    {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("form2", "paco");
    if (form)
    {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("form3", "pepe");
    if (form)
    {
        std::cout << *form << std::endl;
        delete form;
    }

    std::cout << "\nCreate non-exist form" << std::endl;
    form = someRandomIntern.makeForm("form4", "Nobody");
    if (!form)
        std::cout << "no form was create" << std::endl;

    std::cout << "\nexecute form1" << std::endl;
    Bureaucrat boss("boss", 1);
    form = someRandomIntern.makeForm("form1", "juan");
    if (form)
    {
        boss.signForm(*form);
        boss.executeForm(*form);
        delete form;
    }

    return 0;
}

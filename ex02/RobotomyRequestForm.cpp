#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("unnamed", 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45) {
    std::cout << name << " has been robotomized" << std::endl;
    int n;
    n = rand()%100+1;
    if (n >= 50)
        std::cout << name << " has been robotomized" << std::endl;
    else
        std::cout << name << " robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}


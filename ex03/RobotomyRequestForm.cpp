#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy", 72, 45), _target(target){
}

void RobotomyRequestForm::executeAction() const {
    std::cout << _target << "Makes some drilling noises" << std::endl;
    int n;
    n = rand() % 100+1;
    if (n > 50)
        std::cout << _target << " has been robotomized" << std::endl;
    else
        std::cout << _target << " failed robotomy" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}


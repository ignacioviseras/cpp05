#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(const std::string& name, int grade);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

};
std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& s);

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void executeAction() const;
};

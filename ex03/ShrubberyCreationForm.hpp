#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void executeAction() const;
        // std::string write_tree();
};

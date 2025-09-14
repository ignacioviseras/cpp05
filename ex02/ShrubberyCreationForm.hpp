#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string fileN);
    ShrubberyCreationForm(const std::string& name, int grade);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(const int gradeToSign, const int gradeToExecute);
};
std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& s);

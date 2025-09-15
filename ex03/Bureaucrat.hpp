#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat {
private:
    std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();
    
    void executeForm(AForm const & form) const;
    void signForm(AForm &f) const;
	const std::string& getName() const;
    int getGrade() const;
	void incrementGrade();
    void decrementGrade();
	class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
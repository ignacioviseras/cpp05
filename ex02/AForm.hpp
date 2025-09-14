
#pragma once
#include <iostream>
#include <string>

class Bureaucrat;
class AForm {
private:
    std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
public:
    AForm();
    AForm(const std::string& name, int gradeToSign, int gradeToExecute);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

	const std::string& getName() const;
    bool isSigned() const;
	int getGradeToSing() const;
    int getGradeToExecute() const;

    virtual void execute(Bureaucrat const & executor) const;
    virtual void executeAction() const = 0;
    void beSigned(const Bureaucrat& b);
	class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
};
std::ostream& operator<<(std::ostream& os, const AForm& f);

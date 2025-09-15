#include "Bureaucrat.hpp"
#include "AForm.hpp"

//constructor without data
Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150) {}

//constructor with data
Bureaucrat::Bureaucrat(const std::string& name, int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	_name = name;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
	
}

void Bureaucrat::signForm(AForm &f)const {
	try {
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << _name << " couldnt sign " << f.getName()
			<< "\n  error: " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & f) const {
	try
	{
		f.execute(*this);
		std::cout << _name << " execute " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " couldnt execute " << f.getName() 
			<< " error " << e.what() << std::endl;

	}
}

const std::string& Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;	
}


void Bureaucrat::decrementGrade() {
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;	
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "grade to high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "grade to low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
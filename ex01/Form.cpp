#include "Bureaucrat.hpp"
#include "Form.hpp"


Form::Form() : _name("unnamed"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) 
: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other)
	: _name(other._name), _signed(other._signed),
	 _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

Form::~Form() {}

Form& Form::operator=(const Form& other) {
	if (this != &other)
		_signed = other._signed;
	return *this;
}



const std::string& Form::getName() const {
	return _name;
}

bool Form::isSigned() const {
	return _signed;
}

int Form::getGradeToSing() const {
	return _gradeToSign;
}

int Form::getGradeToExecute() const {
	return _gradeToExecute;
}


void Form::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "form grade to high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "form grade to low";
}

std::ostream& operator<<(std::ostream& os, const Form& f) {
	os << "form " << f.getName()
	<< "\n signed " << (f.isSigned() ? "yes" : "no")
	<< "\n grade to sign " << f.getGradeToSing()
	<< "\n grade to execute " << f.getGradeToExecute();
	return os;
}
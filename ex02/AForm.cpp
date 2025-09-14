#include "Bureaucrat.hpp"
#include "AForm.hpp"


AForm::AForm() : _name("unnamed"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) 
: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
	: _name(other._name), _signed(other._signed),
	 _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		_signed = other._signed;
	return *this;
}

void execute(Bureaucrat const & executor) const {
	if (!this->isSigned())
		throw std::cerr << " form " << this->_name << "not signed" << std::endl;
	if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    this->executeAction();
}


const std::string& AForm::getName() const {
	return _name;
}

bool AForm::isSigned() const {
	return _signed;
}

int AForm::getGradeToSing() const {
	return _gradeToSign;
}

int AForm::getGradeToExecute() const {
	return _gradeToExecute;
}


void AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "AForm grade to high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "AForm grade to low";
}

std::ostream& operator<<(std::ostream& os, const AForm& f) {
	os << "AForm " << f.getName()
	<< "\n signed " << (f.isSigned() ? "yes" : "no")
	<< "\n grade to sign " << f.getGradeToSing()
	<< "\n grade to execute " << f.getGradeToExecute();
	return os;
}
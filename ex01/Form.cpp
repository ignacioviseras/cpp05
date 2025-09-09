#include "Bureaucrat.hpp"
#include "Form.hpp"


Form::Form() : _name("unnamed"), _singed(false), _grade_sign(150), _grade_execute(150) {}

Form::Form(std::string& name, int gradeToSing, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSing), _gradeToExecute(gradeToExecute) {
	if (gradeToSing < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSing < 150 || gradeToExecute < 150)
		throw GradeTooLowException();
}

Form::~Form() {}
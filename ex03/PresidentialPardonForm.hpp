#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		void executeAction() const;
};

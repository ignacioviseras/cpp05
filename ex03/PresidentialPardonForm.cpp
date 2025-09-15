#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidental", 25, 5), _target(target) {

}

void PresidentialPardonForm::executeAction() const {
	std::cout << _target << " has been pardone by Zaphod Beebledrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

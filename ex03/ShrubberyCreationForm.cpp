#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShruberryCreationForm", 145, 137), _target(target) {}

std::string write_tree() {
    std::stringstream tree;
    int height = 6;

    for (int i = 0; i < height; ++i) {
        int spaces = height - i - 1;
        for (int s = 0; s < spaces; ++s) tree << ' ';
            for (int j = 0; j < (2 * i + 1); ++j) tree << '*';
            tree << '\n';
    }
    for (int t = 0; t < 1; ++t) {
        for (int s = 0; s < height - 1; ++s) tree << ' ';
            tree << "||" << '\n';
    }
    return tree.str();
}

void ShrubberyCreationForm::executeAction() const {
    std::ofstream outfile((_target + "_shrubbery").c_str());
	if (!outfile) {
		std::cerr << "Error: cannot open file " << std::endl;
	}
    outfile << write_tree();
	outfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

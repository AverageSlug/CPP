#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("Presidential Pardon Form", 25, 5), _target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form(cpy) {
	*this = cpy;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a) {
	return (*this);
}

void	ShrubberyCreationForm::doAction(Bureaucrat const &executor) const {
	std::fstream f;
	f.open(_target + "_shrubbery", std::ios::out);
	f << "                                              .    " << std::endl;
	f << "                                   .         ;     " << std::endl;
	f << "      .              .              ;%     ;;      " << std::endl;
	f << "        ,           ,                :;%  %;       " << std::endl;
	f << "         :         ;                   :;%;'     .," << std::endl;
	f << ",.        %;     %;            ;        %;'    ,;  " << std::endl;
	f << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl;
	f << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl;
	f << "    ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl;
	f << "     `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl;
	f << "      `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl;
	f << "         `:%;.  :;bd%;          %;@%;'             " << std::endl;
    f << "           `@%:.  :;%.         ;@@%;'              " << std::endl;
	f << "             `@%.  `;@%.      ;@@%;                " << std::endl;
	f << "               `@%%. `@%%    ;@@%;                 " << std::endl;
	f << "                 ;@%. :@%%  %@@%;                  " << std::endl;
	f << "                   %@bd%%%bd%%:;                   " << std::endl;
    f << "                     #@%%%%%:;;                    " << std::endl;
	f << "                     %@@%%%::;                     " << std::endl;
	f << "                     %@@@%(o);  . '                " << std::endl;
	f << "                     %@@@o%;:(.,'                  " << std::endl;
	f << "                 `.. %@@@o%::;                     " << std::endl;
	f << "                    `)@@@o%::;                     " << std::endl;
	f << "                     %@@(o)::;                     " << std::endl;
	f << "                    .%@@@@%::;                     " << std::endl;
	f << "                    ;%@@@@%::;.                    " << std::endl;
	f << "                   ;%@@@@%%:;;;.                   " << std::endl;
	f << "               ...;%@@@@@%%:;;;;,..                " << std::endl;
	f.close();
}

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

	private:
		std::string _target;

	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm &other);

			void	action() const;

			ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
			~ShrubberyCreationForm();
};
#include "AForm.hpp"
#include <math.h>

class PresidentialPardonForm : public AForm
{
	private:
			std::string _target;

	public:
			PresidentialPardonForm();
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(const PresidentialPardonForm &other);

			void	action() const;

			PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
			~PresidentialPardonForm();
};

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	private:
		std::string _target;

	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm &other);

			void	action() const;

			RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
			~RobotomyRequestForm();
};
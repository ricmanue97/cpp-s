
#pragma once

#include <iostream>

class Brain
{
	private:
			std::string _ideas[100];

	public:
			Brain();
			Brain(const Brain& og);
			Brain& operator=(const Brain& og);
			~Brain();

};
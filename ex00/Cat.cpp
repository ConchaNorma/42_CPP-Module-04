/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:20:08 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 17:18:24 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "CAT called DEFAULT constructor" << std::endl;
}

Cat::Cat(std::string n_type) : Animal("Cat " + n_type)
{
	std::cout << "CAT called NAMED constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other){
		this->type = other.type;
	}
	std::cout << "CAT Copy assignment operator called for " << other.type << std::endl;
	return *this;
}

Cat::Cat(const Cat& other)
{
	std::cout << "CAT Copy constructor called for " << other.type << std::endl;
	*this = other;
}

void Cat::makeSound() const
{
	std::cout << type << " says MYAU" << std::endl;
}

Cat::~Cat()
{
	std::cout << "CAT called Destructor" << std::endl;
}

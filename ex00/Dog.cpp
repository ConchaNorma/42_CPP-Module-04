/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:20:08 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 17:18:28 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "DOG called DEFAULT constructor" << std::endl;
}

Dog::Dog(std::string name) : Animal("Dog " + name)
{
	std::cout << "DOG called NAMED constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other){
		this->type = other.type;
	}
	std::cout << "DOG Copy assignment operator called for " << other.type << std::endl;
	return *this;
}

Dog::Dog(const Dog& other)
{
	std::cout << "DOG Copy constructor called for " << other.type << std::endl;
	*this = other;
}

void Dog::makeSound() const
{
	std::cout << type << " says WOOF" << std::endl;
}

Dog::~Dog()
{
	std::cout << "DOG called Destructor" << std::endl;
}

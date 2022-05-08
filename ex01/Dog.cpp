/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:20:08 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 21:13:56 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->m_brain = new Brain();
	std::cout << "DOG called DEFAULT constructor" << std::endl;
}

Dog::Dog(std::string name) : Animal("Dog " + name)
{
	this->m_brain = new Brain();
	std::cout << "DOG called NAMED constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other){
		this->type = other.type;
	}
	*(this->m_brain) = *(other.getBrain());
	std::cout << "DOG Copy assignment operator called for " << other.type << std::endl;
	return *this;
}

Dog::Dog(const Dog& other)
{
	std::cout << "DOG Copy constructor called for " << other.type << std::endl;
	if (this != &other){
		this->type = other.type;
	}
	this->m_brain = new Brain();
	*(this->m_brain) = *(other.getBrain());
	//*this = other;
}

void Dog::makeSound() const
{
	std::cout << type << " says WOOF" << std::endl;
}

Brain* Dog::getBrain() const {return this->m_brain; }

Dog::~Dog()
{
	delete this->m_brain;
	std::cout << "DOG called Destructor" << std::endl;
}

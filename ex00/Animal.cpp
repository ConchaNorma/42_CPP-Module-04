/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:20:08 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 17:19:11 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() : type("???")
{

	std::cout << "ANIMAL called DEFAULT constructor" << std::endl;
}

Animal::Animal(std::string n_type) : type(n_type)
{
	std::cout << "ANIMAL called NAMED constructor" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "ANIMAL Copy assignment operator called" << std::endl;
	if (this != &other){
		this->type = other.type;
	}
	return *this;
}

Animal::Animal(const Animal& other)
{
	std::cout << "ANIMAL Copy constructor called" << std::endl;
	*this = other;
}

std::string Animal::getType() const {return type;}

void Animal::makeSound() const
{
	std::cout << "ANIMAL " + type << " says ?????" << std::endl;
}

Animal::~Animal()
{
	std::cout << "ANIMAL called Destructor" << std::endl;
}

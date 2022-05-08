/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:20:08 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 17:19:01 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("???")
{

	std::cout << "WRONG ANIMAL called DEFAULT constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string n_type) : type(n_type)
{
	std::cout << "WRONG ANIMAL called NAMED constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WRONG ANIMAL Copy assignment operator called for " << other.type << std::endl;
	if (this != &other){
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WRONG ANIMAL Copy constructor called for " << other.type << std::endl;
	*this = other;
}

std::string WrongAnimal::getType() const {return type;}

void WrongAnimal::makeSound() const
{
	std::cout << "WRONG ANIMAL " + type << " says ?????" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WRONG ANIMAL called Destructor" << std::endl;
}

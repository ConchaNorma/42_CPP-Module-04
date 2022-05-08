/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:20:08 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 16:36:03 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WRONG Cat")
{
	std::cout << "WRONG CAT called DEFAULT constructor" << std::endl;
}

WrongCat::WrongCat(std::string n_type) : WrongAnimal("WRONG Cat " + n_type)
{
	std::cout << "WRONG CAT called NAMED constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other){
		this->type = other.type;
	}
	std::cout << "WRONG CAT Copy assignment operator called for " << other.type << std::endl;
	return *this;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WRONG CAT Copy constructor called for " << other.type << std::endl;
	*this = other;
}

void WrongCat::makeSound() const
{
	std::cout << type << " says MYAU" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WRONG CAT called Destructor" << std::endl;
}

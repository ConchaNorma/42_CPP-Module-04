/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:20:08 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 20:53:29 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "BRAIN called DEFAULT constructor" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; ++i){
		this->ideas[i] = other.getIdea(i);
	}
	std::cout << "BRAIN Copy assignment operator called for " << std::endl;
	return *this;
}

Brain::Brain(const Brain& other)
{
	std::cout << "BRAIN Copy constructor called for " << std::endl;
	*this = other;
}

void Brain::setIdea (std::string idea, int i)
{
	this->ideas[i] = idea;
}

std::string Brain::getIdea (int i) const {return this->ideas[i];}

Brain::~Brain()
{
	std::cout << "BRAIN called Destructor" << std::endl;
}

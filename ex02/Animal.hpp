/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:07:52 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/10 14:45:52 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include "Brain.hpp"

class Animal
{
public:
	Animal();
	Animal(std::string n_type);

	Animal& operator=(const Animal &other);
	Animal(const Animal &other);

	std::string getType() const;
	virtual void makeSound() const = 0;
	virtual Brain* getBrain() const = 0;

	virtual ~Animal();

protected:
	std::string type;
};

#endif

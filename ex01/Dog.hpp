/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:07:52 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 21:04:15 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string n_type);
	Dog& operator=(const Dog &other);
	Dog(const Dog &other);

	virtual void makeSound() const;

	Brain* getBrain() const;

	virtual ~Dog();

private:
	Brain* m_brain;
};

#endif

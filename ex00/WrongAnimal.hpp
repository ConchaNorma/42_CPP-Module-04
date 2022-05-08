/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:07:52 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 16:32:21 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string n_type);

	WrongAnimal& operator=(const WrongAnimal &other);
	WrongAnimal(const WrongAnimal &other);

	std::string getType() const;
	void makeSound() const;

	~WrongAnimal();

protected:
	std::string type;
};

#endif

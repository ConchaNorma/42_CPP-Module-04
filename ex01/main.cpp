/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:14:52 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 21:26:04 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define N_ANIMALS 5

void Test1()
{
    std::cout << "\n***** TEST1 *****\n" << std::endl;

	int i = 0;

    Animal	*animals[N_ANIMALS];
    while (i < N_ANIMALS)
    {
        if (i < N_ANIMALS / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }

    std::cout << "----------------" << std::endl;
    Brain *brain = animals[2]->getBrain();
	brain->setIdea("I want to EAT!", 0);
	brain->setIdea("I want to SLEEP!", 1);
	brain->setIdea("I want outside!", 2);
	std::cout << animals[2]->getBrain()->getIdea(2) << std::endl;

    std::cout << "----------------" << std::endl;
	animals[3]->makeSound();
	animals[4]->makeSound();
	std::cout << "Type: " << animals[2]->getType() << std::endl;

    std::cout << "----------------" << std::endl;
    std::cout << animals[2]->getType() << std::endl;
	*(animals[2]) = *(animals[3]);
    std::cout << animals[3]->getType() << std::endl;
	std::cout << animals[2]->getType() << std::endl;

    std::cout << "----------------" << std::endl;
    i = 0;
    while (i < N_ANIMALS)
    {
        delete animals[i];
        i++;
    }
}

void Test2()
{
	{
		std::cout << "\n***** TEST2 *****\n" << std::endl;

		const Animal *animals[N_ANIMALS];

		for (int i = 0; i < N_ANIMALS; i++)
		{
			if (i < N_ANIMALS / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << "-------------------------------------\n";
		std::cout << animals[0]->getType() << std::endl;
		std::cout << animals[4]->getType() << std::endl;
		Brain *brain;
		brain = animals[0]->getBrain();
		brain->setIdea("I want to EAT!", 0);
		brain->setIdea("I want to SLEEP!", 1);
		brain->setIdea("I want outside!", 2);
		std::cout << animals[0]->getBrain()->getIdea(0) << std::endl;
		std::cout << animals[0]->getBrain()->getIdea(1) << std::endl;
		std::cout << "-------------------------------------\n";
		for (int i = 0; i < N_ANIMALS; i++)
			delete animals[i];
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using copy constructor:\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog(*dogA);

		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using assignment operator overload:\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog;

		*dogA = *dogB;
		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Cat class using copy constructor:\n" << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat(*catA);

		delete catA;
		delete catB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Cat class using assignment operator overload:\n" << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat;

		*catA = *catB;
		delete catA;
		delete catB;
	}
}

int	main (void)
{
	Test1();
	Test2();
	return 0;
}

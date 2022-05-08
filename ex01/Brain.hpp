/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:07:52 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/08 20:55:19 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
public:
	Brain();
	Brain& operator=(const Brain &other);
	Brain(const Brain &other);

	void setIdea (std::string ideas, int i);
	std::string getIdea (int i) const;

	~Brain();

private:
	std::string ideas[100];
};

#endif

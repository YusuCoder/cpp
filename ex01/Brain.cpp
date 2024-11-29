/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:59:03 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/29 12:01:45 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Contructor for Brain class has been called!" << std::endl;
}

Brain::~Brain() {
	std::cout << "Distructor for brain class has been called!" << std::endl;
}

Brain::Brain(Brain const &s) {
	(void)s;
	std::cout << "Brain class has been copied!" << std::endl;
}

Brain &Brain::operator=(Brain const &s) {
	(void)s;
	std::cout << "Equals operator has been overloaded for Brain class!" << std::endl;
	return (*this);
}

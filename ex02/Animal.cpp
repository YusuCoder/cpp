/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:40:27 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 15:47:36 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default constructor has been called!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor for Animal class has been called!" << std::endl;
}

Animal::Animal(Animal const &s) {
    (void)s;
    std::cout << "Animal class has been copied!" << std::endl;
}

Animal &Animal::operator=(Animal const &rhside) {
    (void)rhside;
    std::cout << "Equal operator has been overloaded!" << std::endl;
    return (*this);
}

std::string Animal::getType(void) const {
    return(type);
}

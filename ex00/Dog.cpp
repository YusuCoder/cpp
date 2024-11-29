/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 21:57:17 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 21:57:17 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Constructor for dog class has been created!" << std::endl;
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Destructor for dog class has been called!" << std::endl;
}

Dog::Dog(Dog const &s) : Animal(){
    (void)s;
    std::cout << "Dog class has been copied!" << std::endl;
}

Dog &Dog::operator=(Dog const &s) {
    (void)s;
    std::cout << "Equal operator has been overloaded for dog class!" << std::endl;
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "Wooouuw Wooouuw" << std::endl;
}
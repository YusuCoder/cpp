/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:57:17 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 13:35:22 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Constructor for dog class has been created!" << std::endl;
    this->type = "Dog";
    this->brainDog = new Brain();
}

Dog::~Dog() {
    std::cout << "Destructor for dog class has been called!" << std::endl;
    delete this->brainDog;
}

Dog::Dog(Dog const &s) : Animal(){
    this->type = s.type;
    this->brainDog = new Brain(*s.brainDog);
    std::cout << "Dog class has been copied!" << std::endl;
}

Dog &Dog::operator=(Dog const &s) {
    delete this->brainDog;
    this->type = s.type;
    this->brainDog = new Brain(*s.brainDog);
    std::cout << "Equal operator has been overloaded for dog class!" << std::endl;
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "Wooouuw Wooouuw" << std::endl;
}

Brain* Dog::getBrain(void) const {
    return (this->brainDog);
}

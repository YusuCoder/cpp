/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 23:05:31 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 23:05:31 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() {
    std::cout << "Constructor has been created for WrongDog" << std::endl;
    this->type = "WrongDog";
}

WrongDog::~WrongDog() {
    std::cout << "Destructor has been called for wrongDog" << std::endl;
}

WrongDog::WrongDog(WrongDog const &s) : WrongAnimal() { 
    (void)s;
    std::cout << "WrongDog class has been copied!" << std::endl;
}

WrongDog &WrongDog::operator=(WrongDog const &s){
    (void)s;
    std::cout << "Equal operator has been overloaded for wrongDog class" << std::endl;
    return (*this);
}

void WrongDog::makeSound(void) const{
    std::cout << "Wooouuuw Woouuuuww" << std::endl;
}
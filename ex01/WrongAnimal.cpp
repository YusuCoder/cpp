/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 22:12:41 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 22:12:41 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Constructor for wrong animal has been created!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destrurtor for worng animal has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &s) : Animal(){
    (void)s;
    std::cout << "WrongAnimal class has been copied" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &s){
    (void)s;
    std::cout << "Equal operator has been overloaded for wrongAnimal class" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Some WrongAnimal sound..." << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return(type);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 22:41:16 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 22:41:16 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Constructor for wrongcat class has been created" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "Destructor for wrong cat has been called!"  << std::endl;
}

WrongCat::WrongCat(WrongCat const &s) : WrongAnimal() {
    (void)s;
    std::cout << "WrongCat class has been copied!" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &s) {
    (void)s;
    std::cout << "Equal operator has been overloaded for Wrongcat class" << std::endl;
    return (*this);
}

void WrongCat::makeSound(void) const {
    std::cout << "Meoooow" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 21:51:16 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 21:51:16 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cunstructor for cat class has been created!" << std::endl;
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Destructor for cat class has been called!" << std::endl;
}

Cat::Cat(Cat const &s) : Animal() {
    (void)s;
    std::cout << "Cat class has been copied!" << std::endl;
}

Cat Cat::operator=(Cat const &rhside) {
    (void)rhside;
    std::cout << "Equals operator has been overloaded for cat class!" << std::endl;
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "Meeeeoooow" << std::endl;
}
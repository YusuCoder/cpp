/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:51:16 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 13:34:06 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cunstructor for cat class has been created!" << std::endl;
    this->type = "Cat";
    this->brainCat = new Brain();
}

Cat::~Cat() {
    std::cout << "Destructor for cat class has been called!" << std::endl;
    delete this->brainCat;
}

Cat::Cat(Cat const &s) : Animal() {
    this->type = s.type;
    this->brainCat = new Brain(*s.brainCat);
    std::cout << "Cat class has been copied!" << std::endl;
}

Cat Cat::operator=(Cat const &rhside) {
    delete this->brainCat;
    this->type = rhside.type;
    this->brainCat = new Brain(*rhside.brainCat);
    std::cout << "Equals operator has been overloaded for cat class!" << std::endl;
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "Meeeeoooow" << std::endl;
}

Brain* Cat::getBrain(void) const {
    return (this->brainCat);
}

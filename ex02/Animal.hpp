/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:34:00 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 15:37:26 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string.h>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &s);
        virtual ~Animal();
        Animal &operator=(Animal const &rhside);
        std::string getType(void) const;
        virtual void    makeSound(void) const = 0;
};

#endif

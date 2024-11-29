/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 21:59:37 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 21:59:37 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOB_HPP
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        virtual ~Dog();
        Dog(Dog const &s);
        Dog &operator=(Dog const &s);

        void makeSound(void) const;
};
#endif
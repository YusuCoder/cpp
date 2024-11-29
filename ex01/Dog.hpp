/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:59:37 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 12:21:19 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* brainDog;
    public:
        Dog();
        virtual ~Dog();
        Dog(Dog const &s);
        Dog &operator=(Dog const &s);

        void makeSound(void) const;
        Brain* getBrain(void) const;
};
#endif

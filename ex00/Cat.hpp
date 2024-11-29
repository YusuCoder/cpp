/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 21:47:16 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 21:47:16 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        virtual ~Cat();
        Cat(Cat const &s);
        Cat operator=(Cat const &rhside);

        void makeSound(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:47:16 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 12:04:40 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brainCat;

    public:
        Cat();
        virtual ~Cat();
        Cat(Cat const &s);
        Cat operator=(Cat const &rhside);

        void makeSound(void) const;
        Brain *getBrain(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rustam <rustam@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 22:54:19 by rustam            #+#    #+#             */
/*   Updated: 2024-11-28 22:54:19 by rustam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
    public:
        WrongDog();
        virtual ~WrongDog();
        WrongDog(WrongDog const &s);
        WrongDog &operator=(WrongDog const &s);

        void    makeSound(void) const;
};

#endif
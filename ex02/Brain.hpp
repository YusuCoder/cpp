/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:49:36 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/29 11:58:48 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(Brain const &s);
		Brain &operator=(Brain const &s);
};

#endif

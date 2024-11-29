/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 23:11:00 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 16:03:13 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int aim = 4;
	Animal* animalArray[aim];

	for (int i = 0; i < aim; i += 2) {
		animalArray[i] = new Cat();
		animalArray[i + 1] = new Dog();
	}

	Cat cat;
	Dog dog;
	std::cout << "Original cat Brain address: " << cat.getBrain() << std::endl;
	std::cout << "Original dog Brain address: " << dog.getBrain() << std::endl;

	Cat copyCat = cat;
	Dog copyDog = dog;
	std::cout << "Copied cat Brain address: " << copyCat.getBrain() << std::endl;
	std::cout << "Copied dog Brain address: " << copyDog.getBrain() << std::endl;

	Cat assignedCat;
	Dog assignedDog;
	assignedCat = cat;
	assignedDog = dog;
	std::cout << "Assigned cat Brain address: " << assignedCat.getBrain() << std::endl;
	std::cout << "Assigned dog Brain address: " << assignedDog.getBrain() << std::endl;

	for (int i = 0; i < aim; i++) {
		std::cout << "Animal " << i + 1 << " says: ";
		animalArray[i]->makeSound();
	}

	Cat* dynamicCat = new Cat();
	Dog* dynamicDog = new Dog();
	std::cout << "Dynamic cat Brain address: " << dynamicCat->getBrain() << std::endl;
	std::cout << "Dynamic dog Brain address: " << dynamicDog->getBrain() << std::endl;
	delete dynamicCat;
	delete dynamicDog;

	for (int i = 0; i < aim; i++) {
		delete animalArray[i];
	}

	std::cout << "After self-assignment cat Brain address: " << cat.getBrain() << std::endl;
	std::cout << "After self-assignment dog Brain address: " << dog.getBrain() << std::endl;

	return 0;
}


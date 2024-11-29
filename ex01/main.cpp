/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 23:11:00 by rustam            #+#    #+#             */
/*   Updated: 2024/11/29 13:04:08 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const int aim = 4;
	Animal* animalArray[aim];

	for (int i = 0; i < aim; i += 2) {
		animalArray[i] = new Cat();
		animalArray[i + 1] = new Dog();
	}
	// Test Brain address after creating original objects
	Cat cat;
	Dog dog;

	std::cout << "Original cat Brain address: " << cat.getBrain() << std::endl;
	std::cout << "Original dog Brain address: " << dog.getBrain() << std::endl;
	// Test copy constructors
	Cat copyCat = cat;
	Dog copyDog = dog;

	std::cout << "Copied cat Brain address: " << copyCat.getBrain() << std::endl;
	std::cout << "Copied dog Brain address: " << copyDog.getBrain() << std::endl;
	// Test assignment operators
	Cat assignedCat;
	Dog assignedDog;

	assignedCat = cat;
	assignedDog = dog;

	std::cout << "Assigned cat Brain address: " << assignedCat.getBrain() << std::endl;
	std::cout << "Assigned dog Brain address: " << assignedDog.getBrain() << std::endl;
	// Ensure polymorphism works as expected
	for (int i = 0; i < aim; i++) {
		std::cout << "Animal " << i + 1 << " says: ";
		animalArray[i]->makeSound();
	}
	// Test dynamic allocation and deletion of individual objects
	Cat* dynamicCat = new Cat();
	Dog* dynamicDog = new Dog();
	std::cout << "Dynamic cat Brain address: " << dynamicCat->getBrain() << std::endl;
	std::cout << "Dynamic dog Brain address: " << dynamicDog->getBrain() << std::endl;

	delete dynamicCat;
	delete dynamicDog;

	// Cleanup dynamically allocated array
	for (int i = 0; i < aim; i++) {
		delete animalArray[i];
	}

	std::cout << "After self-assignment cat Brain address: " << cat.getBrain() << std::endl;
	std::cout << "After self-assignment dog Brain address: " << dog.getBrain() << std::endl;

	return 0;
}
